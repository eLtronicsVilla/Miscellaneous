x =50 

def func(x):
	print(x)
	
	#local reassignment !
	#x =200
	x = 'New Value'
	#print(f'I just locally changed X to {x}')
	print(x)

print(func(x))
