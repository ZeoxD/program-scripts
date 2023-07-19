def bsearch(arr, f , l , ele):

    if f <= l:

        mid = (f+l) //2   # mid = 0 + 8 //2

        if arr[mid] == ele:
            print("element found at mid")

        elif arr[mid] > ele:
            return bsearch(arr, f , mid-1, ele)

        else:
            return bsearch(arr, mid+1, l , ele)



arr = [2,3,5,6,7,8]
ele = 3

bsearch(arr,0,5,ele)