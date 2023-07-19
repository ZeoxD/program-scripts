import re

x = "Hello This Is My LiFE "
y = re.findall("[aeiou]+", x)
print(y)