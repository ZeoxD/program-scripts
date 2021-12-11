# Python program to Reverse a number in Python
num = int(input())
rev = 0
while num > 0:
  rem = num % 10  # Finding the remainder
  rev = (rev*10) + rem
  num = num//10  # Finding the quotient
print(rev)