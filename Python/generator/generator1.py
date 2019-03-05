'''

We have learned how to create function using def and return statement.

Generator function allow us to write a function that can send back a value and later assumed
to pick up where it left.

This type of function is a generator in python.allow us to generate a sequence of value over time.

The main difference in syntax will be use of a yield statement.

When generator function is compiled they become an object that supports an iteration protocol.
That means when they are called in your code they don't actually return a value and then exit.

Generator will automatically resume and suspend their execution and state around the last point of value generation.

The advantage is that instead of having to compute an entire series of value up front,
the generator computes one value waits until the next value is call
ed for.

for ex: a range() function doesn't produce a list of memory.For all the values from start to stop.

Instead it just keep track of the last number and step size to provide a flow of number.

If a user need a list ,he has to transform the generator to a list with list range list(range(0,10))




for ex: a range() function doesn't produce a list of memory.For all the values from start to stop.

Instead it just keep track of the last number and step size to provide a flow of number.

If a user need a list ,he has to transform the generator to a list with list range list(range(0,10))


In generator list comprehension is used to generate a list from existing list or generate a new gerator from an existing one.

'''
