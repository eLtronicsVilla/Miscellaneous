a = "ghdsfgsdfgyusdfhsdyf"
def myfun(st):
	for count in range (len(st)):
		#if count % 2 == 0: a[count].upper()
		if count % 2 == 0:  a[count].upper()
		else: return a[count]

print myfun(a)
