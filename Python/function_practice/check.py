def check_even(num):
	return num%2 == 0

mynums = [1,2,3,4,5,6]

print(filter (check_even,mynums))

for item in  filter(check_even,mynums):
	print(item)
