t=int(input())
for i in range(t):
    n=int(input())
    sum=0
    for i in range(n):
        sum+=(3**i)
        j=i
        if sum>=n:
            break
    for i in range(j,-1,-1):
        if (sum-(3**i))>=n:
            sum=sum-(3**i)
    print(sum)