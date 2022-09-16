n=int(input())
k=list(map(int,input().split()))
even=[]
odd=[]
for i in range(len(k)):
  if k[i]%2 == 0:
    even.append(k[i])
  else:
    odd.append(k[i])
for i in range(len(even)):
  print(even[i],end=" ")
print()
for i in range(len(odd)):
  print(odd[i],end=" ")
