count = 0
addobj = 0
answer = False
print('Before: ', count)
for objects in [2,3,4,5,6,7,8,9,10]:
    count = count + 1
    addobj = addobj + objects
    print(count, objects, addobj)
avgobj = addobj / count
print('Average of objects in array: ', avgobj)
if avgobj != 0:
    answer = True
    print(answer, avgobj)
print('After counting: ', count)
