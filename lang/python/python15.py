member = dict()
names = ['piglet','shraddha','diane','nana','piglet','shraddha','diane','shraddha','diane','mr.pidpid']
for name in names :
    member[name] = member.get(name, 0) + 1
    print(member)
print(member)