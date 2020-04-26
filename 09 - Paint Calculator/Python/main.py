from math import ceil

l = float(input("What is the length in feet? "))
w = float(input("What is the width in feet? "))

A = l * w

print("You will need {} gallons of paint to cover {} square feet.".format(int(ceil(A/350)), A))