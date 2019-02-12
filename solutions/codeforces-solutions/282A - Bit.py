x = 0
n = int(input())

for i in range(n):
	st = input()
	if ("+" in st): x += 1
	elif ("-" in st): x-= 1

print(x)