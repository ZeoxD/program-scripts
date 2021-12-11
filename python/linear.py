x=int(input("Enter the size of the list: "))
arr=[]
for i in range(x):
    arr.append(int(input("Enter the element in the list: ")))
item=int(input("Enter the item to be searched: "))
for i in range(0, len(arr)):
    if arr[i] == item:
        flage=i+1
        break
    else:
        flage=0
if flage!=0:
    print('Element is found')
else:
    print('Emenent is not found')This line is added with the help of cat command.

This is again added with the help of cat command.
Typing new line in the file from the bash with the help of cat command.
