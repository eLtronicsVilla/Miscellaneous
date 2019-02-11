/* When should we write our own copy constructor.

When we create a object of class by using already created object of same class then copy constructor will call 
compiler itself will create  a deafult copy constrctor and copy the member variable and member function 
as it is - shallow copy.

Problems comes when we create a pointer or dynamically allocated memory in the base class.
In that case we have to explicitely define a copy constructor in the class that will assign a new memory 
for pointer and dynamic allocated memory - it's called deep copy.

*/

