I = 2
answer = 1
print("enter first number")
a = int(input("")) 
print("enter second number")
b = int(input(""))    

while a > 1 or b > 1:
    if a % I == 0 and b % I != 0:
        a = a // I 
        answer = answer * I 
    elif a % I != 0 and b % I == 0:
        b = b // I
        answer = answer * I 
    elif  a % I == 0 and b % I == 0:   
        a = a // I 
        b = b // I 
        answer = answer * I 
    else:
        I = I + 1
print("The LCM is:" + str(answer))

    