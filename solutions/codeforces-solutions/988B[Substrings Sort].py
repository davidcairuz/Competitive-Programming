n = int(input())

strings = []

for i in range(n):
	s = input()
	strings.append(s)

strings.sort(key=len)

flag = True #only changes if we find a s[i] thats not in s[i+1]

for i in range(len(strings)-1):
	if(strings[i] not in strings[i+1]):
		flag = False

if flag:
	print("YES")
	for i in strings:
		print(i)
else:
	print("NO")