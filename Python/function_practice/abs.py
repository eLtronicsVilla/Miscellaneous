def almost_there(n):
	return (abs(100-n) <= 10 ) or (abs(200-n) <=10)

print(almost_there(104))
print(almost_there(150))

