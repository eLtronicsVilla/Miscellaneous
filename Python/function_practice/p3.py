#def myfunc(*args):
#	print(args)

#myfunc(1,2,3,4)

def myfunc(**kwargs):
	if 'fruit' in kwargs:
		print('My fruit of choice is {}'.format(kwargs['fruit']))
	else:
		print('I did not find any fruit here')

myfunc(fruit = 'apple', veg = "cabbage")
