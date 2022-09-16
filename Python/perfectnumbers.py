t=int(input())
for i in range(t):
    sum=0
    n=int(input())
    for j in range(1,n):
        if n%j==0:
            sum+=j
    if sum==n:
        print("true")
    else:
        print("false")



