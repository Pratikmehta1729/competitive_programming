t = int(input())
def turing(i,j,li):
	l = []
	for r in range(0,9):
		if(li[i][r] != 0 and r != j):
			if(li[i][r] not in l):
				l.append(li[i][r])
		if(li[r][j] != 0 and r != i):
			if(li[r][j] != 0):
				if(li[r][j] not in l):
					print(li[r][j])
					l.append(li[r][j])
	return l				
for _ in range(t):
	li = []
	for i in range(0,9):
		l = list(input().split())
		li.append(l)
	dic = {}
	for i in range(0,9):
		for j in range(0,9):
			I = str(i)
			J  = str(j)
			if(li[i][j] == 0):
				dic[I + J] = turing(i,j,li)
	print(dic)
