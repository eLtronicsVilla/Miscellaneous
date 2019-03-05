# one.py

def func():
	print("FUNC() IN ONE.PY")

#print("TOP LEVEL IN ONE.PY")

def function():
	pass

def function2():
	pass

if __name__ == '__main__':
	print('ONE.PY is being run directly!')
	function2()
	function()
	func() 
