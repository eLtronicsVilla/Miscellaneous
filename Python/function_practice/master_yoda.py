def master_yoda(text):
	wordlist = text.split()
	reverse_word_list = wordlist[::-1]
	return ' '.join(reverse_word_list)

print(master_yoda('I am home'))
print(master_yoda('we are ready'))
