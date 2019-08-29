
# Returning the array which contains the elements which appear only once in a given array

instr = input()
ls = instr.split(',')
nls =[]
for x in ls:
	num = int(x)
	nls.append(num)
rlist = []
for x in nls:
	count = 0
	for y in nls:
		if(x==y):
			count = count+1
		if(count>1):
			break
	if(count==1):
		rlist.append(x)
if(rlist==[]):
	exit()
else:
	print(rlist)

# --------------------------------------------------------------------------------------


# Subarrays with first element greater than or equal to last element and the subarray size equal to x


subarrays = []
x = int(input('Subarray size = '))
for y in rlist :
	if((rlist.index(y)+x)!=(len(rlist)+1)):
		tsubarr = rlist[(rlist.index(y)):(rlist.index(y)+(x))]
		if(len(tsubarr) == 4):
			print(tsubarr)
			if(int(tsubarr[0])>=int(tsubarr[-1])):
				subarrays.append(tsubarr)
print(subarrays)

#-------------------------------------------------------------------------------------

# Find the largest value which can be formed by combining the absolute value of each subarray. 

from itertools import permutations

outmax = 0
for arr in subarrays :
	perm = permutations(arr)
	inmax = 0
	for x in list(perm):
		x=str(x)
		x=x.replace('(','')
		x=x.replace(')','')
		x=x.replace(',','')
		x=x.replace(' ','')
		x=x.replace('-','')
		x=int(x)
		if(x>inmax):
			inmax=x
	if(inmax>outmax):
		outmax=inmax
print(outmax)
