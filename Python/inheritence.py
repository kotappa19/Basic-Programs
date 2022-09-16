class car:
	def __init__(self,gears,tyres,max_speed):
		self.gears=gears
		self.tyres=tyres
		self.max_speed=max_speed
	def speedup(self):
		print("car speed increasing")
	def apply_break(self):
		print("car speed decreasing")
class audi(car):
	def race_mode(self):
		print("race mode is on")
class benz(car):
	pass
class bmw(car):
#mileage is another parameter which is there only for bmw car and speedup method is changed for bmw car class so it is known as function overriding
	def __init__(self,mileage,gears,tyres,max_speed):
		self.mileage=mileage
		super().__init__(gears,tyres,max_speed)
	def speedup(self):
		print("car speed is increasing and increasing more")
bm=bmw(20,5,2,560)
a=audi(5,4,320)
b=benz(5,4,240)
print(a.gears)
print(a.tyres)
print(a.max_speed)
a.speedup()
a.apply_break()
a.race_mode()
print("----")
print(b.gears)
print(b.tyres)
print(b.max_speed)
b.speedup()
b.apply_break()
print(bm.gears)
print(bm.tyres)
print(bm.max_speed)
bm.speedup()
bm.apply_break()
print(bm.mileage)
