#6 program (nikkitt's)
sales=int(input("enter sales amount"))
if sales>=30000:
    discount=sales*0.18
elif sales>=20000:
    discount=sales*0.15
elif sales>=10000:
    discount=sales*0.10
else:
    discount=sales*0.05
print("discount =",discount)
