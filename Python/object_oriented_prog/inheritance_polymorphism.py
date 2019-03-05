class Animal():
	
	def __init__(self):
		print("Animal found")
	
	def who_am_i(self):
		print("I am an animal")

	def eat(self):
		print("I am eating")

	def who_am_i(self):
		print("I am a dog")

class Dog(Animal):
	
	def __init__(self):
		Animal.__init__(self)
		print("Dog created")
	
	def eat(self):
		print("I am a dog and eating")

	def bark(self):
		print("WOOF!")


myanimal = Animal()
#print(myanimal)
myanimal.eat()
myanimal.who_am_i()
mydog = Dog()
mydog.eat()
mydog.bark()
