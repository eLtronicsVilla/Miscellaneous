def count_primes(num):
	for n in range(num):
		if n < 0:
			return 0

		##################
		# 2 or grater
		##################

		# store our prime number
		primes = [2]
		# Counter going up to the input num
		x = 3 
		
		# x is going through every number up to input num
		while x <= num:
			#check if x is prime
			for y in range(3,x,2):
				if x%y == 0:
					x += 2
					break
			else:
				primes.append(x)
				x += 2
		print(primes)
		return len(primes)

print(count_primes(100))
