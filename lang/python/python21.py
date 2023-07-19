num = int(input())
temp=num
rev=0

while(num>0):
    val=num%10
    rev=rev*10+val
    num=num//10

if(temp==rev):
    print("Palindrome")
else:
    print("Not a Palindrome")
