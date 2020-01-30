import math
arr=[1,0]
for i in range(2,60):
    arr.append((arr[i-1]+arr[i-2])%10)
t=int(input(""))
for _ in range(t):
    n=int(input(""))
    k=int(math.log(n,2))
    k=2**k
    k%=60
    print(arr[k])









