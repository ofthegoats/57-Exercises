ni = int(input("What is the number of items? "))
subtotal = 0

for i in range(ni):
    n = float(input("What is the price of item {}: ".format(i + 1)))
    subtotal += n * int(input("What is the quantity of item {}: ".format(i + 1)))

print("Subtotal: £{}\nTax: £{}\nTotal: £{}\n".format(subtotal, subtotal * 0.055, subtotal * 0.055 + subtotal))