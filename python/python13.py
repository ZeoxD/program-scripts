limit = 29

sum = 0
num = 2

for num in range(limit + 1):

    i = 1
    
    for i in range(2,num):
        if (int(num % i) == 0):
            i = num
            break;

    if i is not num:
        sum += num

print("\nSum of 10 prime numbers =", sum)