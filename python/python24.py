num=int(input())

rev=0

while(num>0):
    val=num%10
    rev=rev*10+val
    num=num//10

print("Reverse: ",rev)