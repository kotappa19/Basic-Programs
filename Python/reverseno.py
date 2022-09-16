n=int(input())
z=0
while n:
    x=n%10
    n=n//10
    z=x+z*10
print(z)
    