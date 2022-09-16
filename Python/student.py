class student:
	def __init__(self,first_name,last_name,age,roll_no):
		self.first_name=first_name
		self.last_name=last_name
		self.age=age
		self.roll_no=roll_no
	def study(self):
		print("studying")
	def assignment(self):
		print("assignment completed")
	def bunk(self):
		print("bunked classes")
	def coding(self):
		print("does coding")
k=student("kotappa","gandudi",22,25)
print(k.first_name)
print(k.last_name)
print(k.age)
print(k.roll_no)
k.assignment()
k.study()
k.bunk()
k.coding()
