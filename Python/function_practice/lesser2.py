def lesser_of_two_evens(a,b):
	
	if a%2 == 0  and b%2==0:
		#both number are even
		return min(a,b)
	else:
		#one or both number are odd
		return max(a,b)
	
	return result

print(lesser_of_two_evens(6,8))
print (lesser_of_two_evens(1,7))

