noPeople = int(input("How many people? "))
noPizza = int(input("How many pizzas? "))
noSlices = int(input("How many slices per pizza? "))

print("{} people with {} pizzas, each of {} slices".format(noPeople, noPeople, noSlices))
print("Each person gets {} slices of pizza.".format((noPizza * noSlices)//noPeople))
print("There are {} leftover slices.".format((noPizza * noSlices)%noPeople))