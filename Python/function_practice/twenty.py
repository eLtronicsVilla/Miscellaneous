def makes_twenty(n1,n2):
	
	return (n1+n2) == 20 or n1 == 20 or n2 == 20

'''
	if n1 + n2 == 20:
		return True
	elif n1 == 20:
		return True
	elif n2 == 20:
		return True
	else:
		return False
'''
print(makes_twenty(20,10))
print(makes_twenty(15,05))
print(makes_twenty(10,10))
print(makes_twenty(5,7))
