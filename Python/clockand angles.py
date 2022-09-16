#n=int(input())
m,k=map(int,input().split())
g=k/5
if(m>g):
    s=m-g
else:
    s=g-m
print(int(s*30))