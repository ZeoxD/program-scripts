def alternating(lst):
    count = 0
    if(lst[0]%2==0):
        for i in range(len(lst)):
            a = lst[i]

            if(a%2==0 and i%2==0):
                count = count+1
            
            if (a%2!=0 and i%2!=0):
                count = count+1
            
    if (lst[0]%2!=0):
        return False

    if (count == len(lst)):
        return True
    else:
        return False

lst = [14,15,13]

print(alternating(lst))