A = [5,2,3,1,6,8,4]
n = len(A)

print(A)

for i in range (1, n):
    j = i
    
    while (j>0 and A[j-1]>A[j]):

        temp = A[j-1]
        A[j-1] = A[j]
        A[j] = temp

        j = j-1
        print(A)

print("After sorting")
print(A)
