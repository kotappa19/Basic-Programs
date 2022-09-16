class student:
	sec=2
	def __init__ (self,fname,lname,age,roll):
		self.fname=fname
		self.lname=lname
		self.age=age
		self.roll=roll
	
	def study(self):
		print("student is studying")
	def asgm(self):
		print("student will complete assignment")
	def bunk(self):
		print("student will bunk classes")
	def coding(self):
		print("student will do coding")
s1=student("kotappa","gandudi",22,47)
s2=student("ranjit","alagawadi",20,70)
print(s1.fname)
print(s1.lname)
print(s1.age)
print(s1.roll)
print(s1.sec)
s1.study()
s1.asgm()
s1.bunk()
s1.coding()
print(s2.fname)
print(s2.lname)
print(s2.age)
print(s2.roll)
print(s2.sec)
s2.study()
s2.asgm()
s2.bunk()
s2.coding()

