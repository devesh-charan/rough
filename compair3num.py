n1= int(input("enter the num1"))
n2 = int(input("enter the num2"))
n3 = int(input("enter the num3"))
if(n1>n2):
    if(n1>n3):
        print("n1 is the gretest")
    else:
        print("n3 is the greatest")
elif (n2>n3):
    print("n2 is the greatest")
else:
    print("n3 is the gratest")