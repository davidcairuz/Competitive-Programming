def gcd(a, b):
	return b if a%b == 0 else gcd(b, a%b)

r = input()

if('.' in r):
	inteiro, decimal = r.split('.')
else:
	inteiro = int(r)
	decimal = 0

num = int(inteiro) * 100 + int(decimal)
ans = 36000/gcd(36000, num)

print(int(ans))
