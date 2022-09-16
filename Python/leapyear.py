n=int(input())
if n%4==0 and (n%400==0 or n%100!=0):
    print("its a leap year")
else:
    print("its not a leap year")
