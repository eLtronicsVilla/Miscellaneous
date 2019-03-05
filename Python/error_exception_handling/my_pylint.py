#pylint.py : python program

#There are several testing tools, we will focus on two.

#pylint: This is a library that looks at your code abnd reports back possible issues.
#unittest: This built-in library will allow to test your own programs and check you are getting desired output.

'''
You will get output like this.

************* Module my_pylint
my_pylint.py:6:0: C0301: Line too long (111/100) (line-too-long)
my_pylint.py:10:0: C0304: Final newline missing (missing-final-newline)
my_pylint.py:1:0: C0111: Missing module docstring (missing-docstring)
my_pylint.py:7:0: C0103: Constant name "a" doesn't conform to UPPER_CASE naming style (invalid-name)
my_pylint.py:8:0: C0103: Constant name "b" doesn't conform to UPPER_CASE naming style (invalid-name)

--------------------------------------------------------------------
Your code has been rated at -2.50/10 (previous run: -2.50/10, +0.00)

'''

#a = 6
#b = 7
#print(a)
#print(b)

def my_func():
	# a simple function
	first = 1
	second = 2
	print(first)
	print(second)

my_func()
