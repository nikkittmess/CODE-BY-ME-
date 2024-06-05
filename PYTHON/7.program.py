#7 program(nikkitt's)
x=int(input("enter the first number"))
y=int(input("enter the second number "))
z=int(input("enter the third numbre"))
if y>x and y>z:
    maxi=y
    if x>z:
        mid=x
        mini=z
    elif z>x:
        mid=z
        mini=x
elif x>y and x>z:
    maxi=x
    if y>z:
        mid=y
        mini=z
    elif z>y:
        mid=z
        mini=y
else:
    maxi=z
    if y>x:
        mid=y
        mini=x
    elif x>y:
        mid=x
        mini=y
print("maximum=",maxi,"\nmiddle=",mid,"\nminimum=",mini)
