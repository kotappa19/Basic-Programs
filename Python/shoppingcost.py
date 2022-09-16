n=int(input())
for i in range(n):
    m,k=map(int,input().split())
    if m>100:
        print(float((m*k)-(0.2*m*k)))
    else:
        print(float(m*k))
