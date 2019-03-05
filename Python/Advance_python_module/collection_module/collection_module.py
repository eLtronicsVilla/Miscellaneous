'''
Python general purpose build in compiler that can be used in creating a container datatype.
This module provide buildin container.


'''

# Counter module
from collections import Counter

l = [1,1,1,3,3,12,11,11,11,23,23,23,23,5,5]
Counter(l)
print(Counter(l))

s = 'aaasssssffffffdddddhhgfjj'
Counter(s)

s = 'How many types does each word show up in the sentance word word show up up '
word = s.split()
Counter(word)

# to check common words
c = Counter(word)
c.most_common(3)
sum(c.values())

'''
Common patterns when using the Counter() object

sum(c.values())  // total of all counts
c.clear()        // reset all count
list(c)          // list unique elements
dict(c)			// convert to a regular dictionary
c.items()		convert to a 

'''
