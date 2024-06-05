#4 program(nikkitt)
p=int(input("enter principal loan amount"))
r=int(input("enter the rate of interest "))
n=int(input("enter the tenure of loan"))
EMI=(((p*r)*((1+r)**n))/((((1+r)**n)-1)))
print("E.M.I FOR ",n,"MONTHS=",int(EMI))
     
