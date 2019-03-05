def splicer(mystring):
	if len(mystring)%2 == 0:
		return 'EVEN'
	else:
		return mystring[0]

#print(splicer('sdjldhkdgh'))
names = ['Andy','Eve','Sally']
print(list(map(splicer,names)))
