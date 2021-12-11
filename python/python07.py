sm = None

print('Before')

for numbers in [12,34,46,576,12,34,5,6,2,1,32,5]:
    if sm == None:
        sm = numbers
    elif sm > numbers:
        sm = numbers

    print('Smallest number is:', sm)
print('After')