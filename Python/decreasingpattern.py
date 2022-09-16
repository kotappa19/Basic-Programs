n=int(input())
k=0
for i in range(1,6):
    for j in range(1,6-k):
        print(j,end=" ")
    k+=1
    print()