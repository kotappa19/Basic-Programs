def swap(x,y):
	x,y=y,x
	print(x,y)
x,y=map(int,input().split())
swap(x,y)
print(x,y)
 
print("-----------------------------------------------------------------")
def swap(x,y):
	x[0],y[0]=y[0],x[0]
	print(x[0],y[0])
x,y=map(int,input().split())
a=[0]*1
b=[0]*1
a[0]=x
b[0]=y
swap(a,b)
print(a[0],b[0])
print(x,y)
