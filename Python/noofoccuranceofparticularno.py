t=int(input())
for i in range(t):
    count=0
    n=int(input())
    while(n>0):
        x=n%10
        if(x==5):
            count+=1
        n=n//10
    print(count)
