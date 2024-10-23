# Basic calculatir in python

x=float(input("Give me a number :"))
o=input("Give me a operator :")
y = float(input("Give me another number :"))

if o == "+":
    result = (x+y)
elif o == "-":
    result = (x-y)
elif o=="*":
    result = (x * y)
elif o=="/":
    result = (x/y)
elif o=="**":
    result = (x ** y)
else:
    result = "unknown operator ....."

print(result)