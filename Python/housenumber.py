t=int(input())
for i in range(t):
    m=input()
    k=len(m)
    m=int(m)
    sum=0
    for i in range(1,k+1):
        sum+=(m-(10**(i-1)-1))
    print(sum)
