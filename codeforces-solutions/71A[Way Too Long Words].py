n = int(input())
words = []
new_words =[]
i = 0

while i < n:
  word = input()
  words.append(word)
  i += 1
  
for word in words:
  if len(word) <= 10:
    new_words.append(word)
  else:
    new_word = word[0] + str(len(word)-2) + word[-1]
    new_words.append(new_word)
    
for word in new_words:
  print (word)