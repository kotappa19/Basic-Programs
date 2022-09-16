#in class phone phoneapp.call funxction is invoked either from truecaller calss or defaultcaller class it doesnot care from where the function is called it only cares about the #functionslity of that this is called duck typing
class truecaller:
	def call(self):
		print("calling")
class defaultcaller:
	def call(self):
		print("calling")
class phone:
	def callfun(self,phoneapp):
		phoneapp.call()
phoneapp=truecaller()
p=phone()
phoneapp=defaultcaller()
p.callfun(phoneapp)
