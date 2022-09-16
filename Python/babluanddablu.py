t=int(input())
for i in range(t):
    n=int(input())
    for j in range(n+1):
        if n<4:
            n+=3
        elif n>3 and n<7:
            n-=3
        elif n==7:
            n+=1
            print(n,'SU')
        elif n==8:
            n-=1
            print(n,'SL')
    if n==1:
        print(n,'LB')
    elif n==2:
        print(n,'MB')
    elif n==3:
        print(n,'UB')
    elif n==4:
        print(n,'LB')
    elif n==5:
        print(n,'MB')
    elif n==6:
        print(n,'UB')
        