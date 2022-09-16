t=int(input())
for i in range(t):
    n=int(input())
    count=0
    while(1):
        if n%10==0:
            break
        else:
            n*=2
            count+=1
    print(count)
