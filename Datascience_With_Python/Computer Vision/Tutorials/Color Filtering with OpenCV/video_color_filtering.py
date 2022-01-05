import cv2
import numpy as np

cap = cv2.VideoCapture(0)

while (1):
    _, frame = cap.read()
    #convert BGR color space to HSV color space
    hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)

    #following is the threshold of red color in the hsv color space
    #adjust the threshold values as per the lighting conditions in your room to get optimum output
    #for the color red, I decreased the values substantially to get a more refined res
    lower_red = np.array([30, 130, 40])
    upper_red = np.array([225, 225, 150])

    #create the overlay for mask
    mask = cv2.inRange(hsv, lower_red, upper_red)

    #the result is calculated by multiplying the original image and the mask
    #since the mask has a value of 0, all the other regions are ignored
    res = cv2.bitwise_and(frame, frame, mask=mask)

    #display the windows
    cv2.imshow('frame', frame)
    cv2.imshow('mask', mask)
    cv2.imshow('res', res)

    k = cv2.waitKey(5) & 0xFF
    if k == 27:
        break

cv2.destroyAllWindows()
cap.release()