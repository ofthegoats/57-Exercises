l = float(input("What is the length of the room in feet? "))
w = float(input("What is the width of the room in feet? "))

print("You entered dimensions of {} feet by {} feet.".format(l, w))
print("The area is\n{} square feet\n{} square metres".format(l*w, l*w*0.09290304))