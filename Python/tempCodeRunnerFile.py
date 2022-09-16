t=int(input())
for i in range(t):
    n=int(input())
    x=0
    z=0
    count=0
    s=n
    if n<10:
        x=9
    else:
        while n>0:
            z=n%10
            n=n//10
            count+=1
        x=9+(count*(s-9))
    print(x)