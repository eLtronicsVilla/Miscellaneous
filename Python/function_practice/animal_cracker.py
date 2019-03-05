def animal_crackers(text):
	 wordlist = text.upper().split()
	# wordlist = text.lower().split()
	 print(wordlist)
	 first = wordlist[0]
	 second = wordlist[1]

	 #return first[0] == second[0]
	 return wordlist[0][0]==wordlist[1][0]


print(animal_crackers('Levelheaded Llama'))
print(animal_crackers('Crazy Kangaroo'))
print(animal_crackers('Crazy cat'))
	 
