class Dog():
	
	def __init__(self,name):
		self.name = name
	
	def speak(self):
		return self.name + "says woof!"
class Cat():
	
	def __init__(self,name):
		self.name = name
	
	def speak(self):
		return self.name + "says meow!"


def pet_speak(pet):
	print(pet.speak())

niko = Dog("niko")
felix = Cat("felix")

print(niko.speak())

print(felix.speak())

for pet in [niko,felix]:
	
	print(type(pet))
	print(type(pet.speak()))

pet_speak(niko)
pet_speak(felix)

class Animal():
	
	def __init__(self,name):
		self.name = name
	
	def speak(self):
		raise NotImplementedError("Subclass must implement this abstract method")


class Dog(Animal):
	
	def speak(self):
		return self.name + "says woof!"


class Cat(Animal):
	
	def speak(self):
		return self.name + "Says meow!"



#myanimal = Animal('fred')

#myanimal.speak()


fido = Dog("Fido")
isis = Cat("Isis")
