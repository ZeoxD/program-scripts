x = int(input("Enter days:"))

if x<=5 and x > 0:
    print("Your Fine is: 50 paise")

elif x>6 and x<=10:
    print("Your Fine is: 1 rupee")

elif x>10 and x<=30:
    print("Your Fine is: 5 rupees")

elif x>30:
    print("Your Membership is cancelled")

else:
    print("Wrong Input!")