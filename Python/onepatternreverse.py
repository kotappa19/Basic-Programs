n=int(input())
x=(2*n)-2
for i in range(n):
    #for j in range(1,i+1):
     #   print("*",end="")
    for k in range(1,x+1):
        print(end=" ")
    x-=2
    for j in range(i,0,-1):
        print(1,end="")
    print()