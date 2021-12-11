students = dict()
counts = {'cwen':2, 'gwen':5, 'lwen':11}

for name in counts:
    if name in counts:
        students = counts[name]
    else:
        students = 0
    print(students)
    print(counts)