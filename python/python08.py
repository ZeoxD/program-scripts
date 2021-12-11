while True:
    line = input()
    if line[0] is '#':
        continue
    if line == 'done':
        break
    print(line)
print('Done!')