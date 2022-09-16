n=int(input())
a=[]
sum=0
for i in range(n):
	k=int(input())
	a.append(k)
for i in range(n):
	sum+=a[i]
print(sum)
