m=input("enter a string")
k=m.split()
j=list(k)
g=set(j)
z=list(g)
for i in z:
    if i!='this' or i!='and' or i!='is' or i!='not':
        print(z[i],end="")

