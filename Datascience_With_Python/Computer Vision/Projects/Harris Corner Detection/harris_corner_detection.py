import cv2, math
import numpy as np
import matplotlib.pyplot as plt
import imutils

def load_image(path_name):
    image = cv2.imread(path_name)
    grayscale_image = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    return grayscale_image

def apply_kernel(image, kernel):
    kernel_size = kernel.shape[0]

    padding_amount = int((kernel_size - 1) / 2)
    rows = image.shape[0] + 2 * padding_amount
    cols = image.shape[1] + 2 * padding_amount
    channels = image.shape[2]
    padded_image_placeholder = np.zeros((rows, cols, channels))
    padded_image_placeholder[padding_amount:rows-padding_amount, padding_amount:cols-padding_amount, :] = image

    filtered_image = np.zeros(image.shape)

    for each_channel in range(channels):
        padded_2d_image = padded_image_placeholder[:,:,each_channel]
        filtered_2d_image = filtered_image[:,:,each_channel]
        width = padded_2d_image.shape[0]
        height = padded_2d_image.shape[1]
        for i in range(width-kernel_size+1):
            for j in range(height-kernel_size+1):
                current_block = padded_2d_image[i:i+kernel_size, j:j+kernel_size]
                convoluted_value = np.sum(current_block * kernel)
                filtered_2d_image[i][j] = convoluted_value
        filtered_image[:,:,each_channel] = filtered_2d_image

    return filtered_image

def get_gaussian_filter(kernel_size, sigma):
    kernel = np.zeros((kernel_size, kernel_size))
    denom = 2 * np.pi * sigma * sigma
    samples = np.arange(-int(kernel_size/2), int(kernel_size/2) + 1)

    for i in range(len(samples)):
        for j in range(len(samples)):
            x = samples[i]
            y = samples[j]
            num = np.exp(-1*(((x*x) + (y*y)) / (2*sigma*sigma)))
            val = num / math.sqrt(denom)
            kernel[i][kernel_size - j - 1] = val
    kernel = kernel / kernel.sum()

    return kernel

def apply_sobelX_kernel(image):
    kernel = (1/8) * np.array([[-1,0,1],[-2,0,2],[-1,0,1]])
    filtered_image = apply_kernel(image, kernel)
    return np.array(filtered_image)

def apply_sobelY_kernel(image):
    kernel = (1/8) * np.array([[1,2,1],[0,0,0],[-1,-2,-1]])
    filtered_image = apply_kernel(image, kernel)
    return np.array(filtered_image)

def apply_gaussian(image, kernel_size, sigma):
    kernel = get_gaussian_filter(kernel_size, sigma)
    filtered_image = apply_kernel(image, kernel)
    return np.array(filtered_image, dtype=np.uint8)

def get_covariance_matrix(image):
    sobelX = apply_sobelX_kernel(image)
    sobelY = apply_sobelY_kernel(image)

    Ixx = sobelX * sobelX
    Ixy = sobelX * sobelY
    Iyx = sobelY * sobelX
    Iyy = sobelY * sobelY

    return Ixx, Ixy, Iyx, Iyy

def get_all_M_matrices(image):
    Ixx, Ixy, Iyx, Iyy = get_covariance_matrix(image)
    windowed_Ixx =  apply_gaussian(Ixx, 7, 1.5)[:,:,0]
    windowed_Ixy =  apply_gaussian(Ixy, 7, 1.5)[:,:,0]
    windowed_Iyx =  apply_gaussian(Iyx, 7, 1.5)[:,:,0]
    windowed_Iyy =  apply_gaussian(Iyy, 7, 1.5)[:,:,0]

    return windowed_Ixx, windowed_Ixy, windowed_Iyx, windowed_Iyy

def get_responses(image):
    windowed_Ixx, windowed_Ixy, windowed_Iyx, windowed_Iyy = get_all_M_matrices(image)
    k = 0.04
    responses = np.zeros((image.shape[0], image.shape[1]))
    for i in range(image.shape[0]):
        for j in range(image.shape[1]):
            first = windowed_Ixx[i][j]
            second = windowed_Ixy[i][j]
            third = windowed_Iyx[i][j]
            fourth = windowed_Iyy[i][j]

            M_matrix_i_j = np.array([[first, second],[third, fourth]])
            determinant = np.linalg.det(M_matrix_i_j)
            trace = np.matrix.trace(M_matrix_i_j)
            response_i_j = determinant - (k*(trace**2))
            responses[i][j] = response_i_j

    return responses

def get_max_indices(block):
    m = block.shape[0]
    n = block.shape[1]

    max_val = np.amin(block) - 1
    p = -1
    q = -1

    for i in range(m):
        for j in range(n):
            if block[i][j] > max_val:
                max_val = block[i][j]
                p = i
                q = j
    return p, q, max_val

def non_maxima_suppression(responses, window_size):
    all_y = []
    all_x = []

    height = responses.shape[0]
    width = responses.shape[1]

    count = 0
    for i in range(0,width-window_size+1,window_size):
        for j in range(0,height-window_size+1,window_size):
            current_block = responses[j:j+window_size, i:i+window_size]
            p, q, max_val = get_max_indices(current_block)
            if(max_val!=-1):
                global_row = j + p
                global_col = i + q
                all_y.append(global_row)
                all_x.append(global_col)

    return all_y, all_x

if __name__ == "__main__":
    threshold_log10 = 3
    threshold = 10**(threshold_log10)
    img = load_image('Q3/flower.jpg')[:,:,np.newaxis]
    # rotated_img = imutils.rotate_bound(img, 90)[:,:,np.newaxis]
    # resized_img = resized = cv2.resize(img, (0,0), fx=0.5, fy=0.5)[:,:,np.newaxis]
    responses = get_responses(img)
    responses = np.where(responses>threshold,responses,-1)
    rows, cols = non_maxima_suppression(responses, 13)
    color_img = cv2.cvtColor(img[:,:,0], cv2.COLOR_GRAY2BGR)

    for each_corner in range(len(rows)):
        cv2.circle(color_img, (cols[each_corner], rows[each_corner]), 3, (0,0,255), -1)
    cv2.imwrite('Q3-Output/corners.jpg', color_img)