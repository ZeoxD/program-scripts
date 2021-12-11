num = input()
digits = len(str(num))

num = int(num)
sum =0
temp = num
while num>0:
    val = num % 10
    sum = sum + val**digits
    num //= 10

if sum == temp:
    print("Armstrong Number")
else:
    print("Not a Armstrong Number")