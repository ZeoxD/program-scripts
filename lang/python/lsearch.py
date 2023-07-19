def l_search(arr, ele):

    for i in range(len(arr)):

        if arr[i] == ele:
            print("element found")


arr = [5,20,34,43,4]
ele = input()
ele = int(ele)

l_search(arr,ele)