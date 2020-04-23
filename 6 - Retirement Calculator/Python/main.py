from datetime import datetime

year = datetime.now().year

age = int(input("What is your current age? "))
ret = int(input("At what age do you want to retire? "))
left = ret - age

print("You have {} years until you can retire".format(left))
print("It's {}, so you can retire in {}".format(year, year+left))