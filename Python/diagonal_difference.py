import math
n=int(input())
matrix=[]
for i in range(n):
	a=list(map(int,input().split()))
	matrix.append(a)
sum1=0
sum2=0
for i in range(n):
        for j in range(n):
                if i==j:
                        sum1+=matrix[i][j]
k=n-1
for i in range(n):
        for j in range(n):
                if j==k:
                        sum2+=matrix[i][j]
        k-=1
print(abs(sum1-sum2))
