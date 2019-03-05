#def myfuncs(a,b,c=0,d=0):
#	return sum((a,b,c,d))*0.05

#print(myfuncs(1,2,3,4))

#def myfunc(*args):
#	return sum(args) * 0.05

#print(myfunc(10,20,30,40))

'''
def myfunc(*args):
	for item in args:
		print(item)

print(myfunc(20,30,40,50,60))

'''

def myfunc(**kwargs):
	print(kwargs)
	if 'fruit' in kwargs:
		print('My fruit of choice is {}'.format(kwargs['fruit']))
	else:
		print('I did not find any fruit here')

myfunc(fruit='apple',veggie = 'lettuce')
