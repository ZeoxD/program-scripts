A = [5,2,3,1,6,8,4,7]
n = len(A)
print(A)

for j in range (0, n-1):
    Min = j 
    for i in range(j+1, n):
        if A[i]<A[Min]:
            Min = i

    if Min != j:
        temp = A[Min]
        A[Min] = A[j]
        A[j] = temp

        print(A)

print("After sorting")
print(A)