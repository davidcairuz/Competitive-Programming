vowels = ["a", "o", "y", "e", "u", "i"]
result = []

my_string = str(raw_input().lower())

for letter in my_string:
	if letter in vowels:
		my_string = [s for s in my_string if s != letter]

for i in range(len(my_string)):
	result.append ("." + my_string[i])

print ("".join(map(str, result)))
print("\n")