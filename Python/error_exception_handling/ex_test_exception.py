# to test exception see below program

try:
	f = open('test_file.txt','r')
	f.write("In the file")
except TypeError:
	print ("file is not openning error.")
except OSError:
	print("hey, you have an exception error")
except:
	print("all other exception")
finally:
	print ("In always runable")


def ask_for_int():

	while True:
		try:
			result=int(input("please provide number"))
		except:
			print("Entered number is not integer")
			continue
		else:
			print("is done!")
			break
		finally:
			print("in finally of block")


ask_for_int()