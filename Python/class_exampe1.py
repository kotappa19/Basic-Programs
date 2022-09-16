class mobile:
	def __init__(self,brand,color,av):
		self.brand=brand
		self.color=color
		self.av=av
	def calling(self):
		print("call picked up")
	def message(self):
		print("message sent")
k=mobile("redmi","blue",10)
g=mobile("oppo","black",8)
print(k.brand)
print(k.color)
print(k.av)
k.calling()
k.message()
print(g.brand)
print(g.color)
print(g.av)
g.calling()
g.message()
