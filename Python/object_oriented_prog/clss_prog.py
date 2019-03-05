class Dog():
	
	species = 'mammal'	
	def __init__(self,mybreed,name,spots):      #attributes we are taking as argument and assign it to as self.attributes
		self.breed = mybreed
		self.name = name

#expect boolean True/ False

		self.spots = spots


# Operations/Action  ---> method
	def bark(self,number):
		print("Woof! My name is {} and the number is {}".format(self.name,number))
#my_dog = Dog(breed = 'Lab')
my_dog = Dog(mybreed = 'Huskie',name = 'Sammy' , spots= 'False')

print(type(my_dog))

print(my_dog.breed)

# For attributes :there is no need to actually execute the object
# For method , we have to execute , so we require openning and closing bracket

print(my_dog.species)

print(my_dog.name)
print(my_dog.spots)
print(my_dog.bark(1))
