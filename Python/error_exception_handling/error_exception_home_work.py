# 1. Handle the exception thrown by the code below by using try and except blocks.

#for i in ['a','b','c']:
#	print (i*2)

# implementation of try-catch block.

#try:
#	for i in ['a','b','c']:
#		print i*2

#except:
#	print("Exception handling for try and catch block")
#else:
#	print("is done!")


# 2. Handle the exception thrown by the code below by using 
# try and except blocks. Then use a finally block to print 'All done'.

#x=5
#y=0

#z=x/y
'''
try:
	x=5
	y=0
	z=x/y

except:
	print("Devided by zero exception")
finally:
	print("All done!")

'''

#3. Write a function that ask for an integer and print the square of it.
# Use a while loop with a try , except , else block to account for incorrect inputs.

def ask():

	while True:
		try:
			a = int(input("Enter an integer"))
		except: 
			print("entered number is not an integer")
			continue
		else:
			print("is done")
			break

	print(a**2)

ask()