g=int(input())
for i in range(g):
	mult=1
	n=int(input())
	k=list(map(int,input().split()))
	for i in range(len(k)):
		mult=mult*k[i]
	print(mult)
