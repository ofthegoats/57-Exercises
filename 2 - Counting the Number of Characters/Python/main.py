string = input("What is the input string? ")
while string == "":
    string = input("Input string cannot be empty.\nWhat is the input string? ")
print(string + " has " + str(len(string)) + " characters.")