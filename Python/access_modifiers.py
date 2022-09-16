#private access modifier
class account:
	__amount=0
	def deposit(self,add):
		self.__amount+=add
	def debit(self,substract):
		self.__amount-=substract
	def printamount(self):
		print(self.__amount)
a1=account()
a1.deposit(1000)
a1.debit(200)
a1.printamount()
#private access modifier can be accessed by only particular class
#-----------------------------------------------------------
#protected access modifier
class account:
	_amount=0
	def deposit(self,add):
		self._amount+=add
	def debit(self,substract):
		self._amount-=substract
	def printamount(self):
		print(self._amount)
class paytax(account):
	def tax(self):
		tax=self._amount*0.2
		print(tax)
a1=paytax()
a1.deposit(1000)
a1.debit(200)
a1.printamount()
a1.tax()
#protected access modifiers can be accessed by both class and its child class
#public access modifiers can be accessed throughout the program
