n=int(input())
for i in range(n):
    a=0
    b=0
    c=0
    d=0
    flag=0
    m=int(input())
    m+=1
    z=m
    while m>0:
        a=m%10
        m=m//10
        b=m%10
        m=m//10
        c=m%10
        m=m//10
        d=m%10
        m=m//10
        if a==b or a==c or a==d or b==c or b==d or c==d:
            z+=1
            m=z
        else:
            flag=1
    if flag==1:
        print(z)


    


