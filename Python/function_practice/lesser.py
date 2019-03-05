def lesser_of_two_events(a,b):
	if a%2 == 0 and b%2 == 0:
		# both numbers are even
		if a < b:
			result = a
		else:
			result = b
	else:
		#one or both numbers are odd
		if a < b:
			result = a
		else:
			result = b
	
	return result


print(lesser_of_two_events(2,4))
print(lesser_of_two_events(3,7))
