def summer_69(arr):
	sum = 0
	add = True

	for value in arr:
		while add:
			if value != 6:
				sum += value
				break;
			else:
				add = False

		while not add:

			if value != 9:
				break
			else:
				add = True
				break
	return sum

print (summer_69([2,5,7,6]))
print (summer_69([2,4,4,5,6,9,7]))
print (summer_69([6,9,6,9,6,9,6]))

