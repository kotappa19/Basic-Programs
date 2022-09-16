t=int(input())
for i in range(t):
    n=int(input())
    if n%8==0:
        n-=1
        print(n,end='SL')
        print()
    elif n%8==7:
        n+=1
        print(n,end='SU')
        print()
    elif n%8==6:
        n-=3
        print(n,end='UB')
        print()
    elif n%8==5:
        n-=3
        print(n,end='MB')
        print()
    elif n%8==4:
        n-=3
        print(n,end='LB')
        print()
    elif n%8==3:
        n+=3
        print(n,end='UB')
        print()
    elif n%8==2:
        n+=3
        print(n,end='MB')
        print()
    elif n%8==1:
        n+=3
        print(n,end='LB')
        print()    