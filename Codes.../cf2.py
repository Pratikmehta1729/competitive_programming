def nCr(n, r):
    return (fact(n) / (fact(r) * fact(n - r)))
def fact(n):
    res = 1
    for i in range(2, n+1):
        res = res * i
    return res
import math
t=int(input(""))
for _ in range(t):
	list_ = list(map(int ,raw_input().split()))
	list_1 = list(map(int ,raw_input().split()))
	list_1.sort()
	a=1
	arr=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
	for i in range(list_[0]):
		arr[list_1[i]-1]+=1
	for i in range(list_[1]-1):
		if list_1[i]==list_1[i+1]:
			a+=1
		else:
			a=1
	print nCr(arr[list_1[list_[1]-1]-1],a)