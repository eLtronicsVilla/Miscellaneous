mylist = [1,2,3]
print(mylist)
print(len(mylist))

class Sample():
	pass

mysample = Sample()

#print(len(mysample))

class Book():
	
	def __init__(self, title,author,pages):
		self.title = title
		self.author = author
		self.pages = pages

	#def __str__(self):
	#	return f"{self.title} by {self.author}"

	def __len__(self):
		return self.pages

	def __del__(self):
		print("A book object has been deleted")


b = Book (' Python ' , 'Jose' , 200) 
print(b)


print(str(b))

print(len(b))

print(del( b))
