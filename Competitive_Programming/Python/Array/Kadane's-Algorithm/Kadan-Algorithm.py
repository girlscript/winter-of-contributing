from sys import maxint

def kadaneAlgo(arr, size_of_arr):
      
    max_so_far = -maxint - 1                         # -maxint-1 is equal to the limit of type int.
    max_end_here = 0
      
    for i in range(0, size):
        max_end_here = max_end_here + arr[i]
        if (max_so_far < max_end_here):
            max_so_far = max_end_here
 
        if max_end_here < 0:
            max_end_here = 0  
    return max_so_far
  
# Main Function Program Start from here.
arr = [-26, -13, -20, -27, -33, -26, -13, -11, -1, -2, -5, -4, -7]
print("Maximum contiguous sum is", kadaneAlgo(arr, len(arr)))


# Time Complexity: O(N)
# Space Complexity: O(1)
