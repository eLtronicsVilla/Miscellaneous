def myfunc(input):
	my_string=[]
	for index,char in enumerate(input):
		if index % 2 == 0:
			my_string.append(char.upper())
		else:
			my_string.append(char.lower())
	return ''.join(my_string)

print(myfunc('sfsfggffgf'))
