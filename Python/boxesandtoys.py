n=int(input())
count=0
for i in range(n):
    k,m=map(int,input().split())
    if (m-k)>=2:
        count+=1
print(count)