#since we cannot add objects a1 and a2 we overload the add function and we add by the following steps
class addition:
	def __init__(self,a,b):
		self.a=a
		self.b=b
	def __add__(self,other):
		res1=self.a+other.a
		res2=self.b+other.b
		return res1+res2
a1=addition(10,20)
a2=addition(100,200)
a3=a1+a2
print(a3)
