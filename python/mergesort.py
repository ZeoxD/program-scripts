def merge_sort(arr):
    if len(arr) > 1:
        # left_arr = arr[:5]
        left_arr = arr[:len(arr)//2]
        # right_arr = arr[5:]
        right_arr = arr[len(arr)//2:]

        #recursion

        merge_sort(left_arr)
        merge_sort(right_arr)

        #merge 

        