'''
we use three keyword for this:

try: This is the block of code to be attempted (may lead to an error)

except:Block of code will execute in case there is an error in try block

finally: A final block of code to be executed , regardless of an error.

'''

def add(a,b):
	return a+b

print(add(3,5))

number1 =6
number2 =7

print(add(number1,number2))


num1 = 8
num2 = input("Enter the number")

#print(add(num1,num2))

try:
	add(num1,num2)
except:
	print("num2 should be integer not string")
else:
	print("num2 is integer",add(num1,num2))
finally:
	print("In finally")