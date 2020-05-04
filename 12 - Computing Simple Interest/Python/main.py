P = float(input("Enter the principal: "))
r = float(input("Enter the rate of interest: "))/100
t = int(input("Enter the number of years: "))

print("After {} years at {}, the investment will be worth £{}.".format(t, r, P * (1+(r*t))))