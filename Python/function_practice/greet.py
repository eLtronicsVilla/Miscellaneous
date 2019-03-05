#global
name = ' This is a global name '

def greet():
	
#	name = 'Sammy'
	
	def hello():
		#local
		print('Hello ' +name)
	
	hello()

print(greet())
