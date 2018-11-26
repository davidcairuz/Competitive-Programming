m, n, a = map(int, input().split())


if a == n and n == m and a == m:
  heigth = int((m/a) + .9)
  lenght = int((n/a) + .9)
  
elif a == 1 or m == 1 or n == 1:
  heigth = int((m/a) + .9)
  lenght = int((n/a) + .9)
  
if m % a == 0 or n % a == 0:
  heigth = int((m/a) + .9)
  lenght = int((n/a) + .9)
  
else:
  heigth = int((m/a) + .99999999999999999)
  lenght = int((n/a) + .99999999999999999)
  
print (heigth * lenght)