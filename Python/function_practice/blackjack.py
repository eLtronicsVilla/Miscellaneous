def black_jack(a,b,c):
	if sum([a,b,c]) <= 21:
		return sum([a,b,c])
	elif 11 in [a,b,c] and sum ([a,b,c]) <=31:
		return sum([a,b,c])-10
	else:
		 return 'BURST' 

print(black_jack(22,8,4))
print (black_jack(4,6,2))	
