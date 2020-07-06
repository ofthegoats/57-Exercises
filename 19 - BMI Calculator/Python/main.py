#!/usr/bin/env python

def calculate_bmi(weight, height): return (weight / (height * height)) * 703

def input_float(output):
    while True:
        try:
            temp = float(input(output))
            return temp
        except ValueError:
            continue
        # else: break

def main():
    weight = input_float("What is your weight in pounds? ")
    height = input_float("What is your height in inches? ")
    bmi    = calculate_bmi(weight, height)

    print("Your BMI is {}".format(bmi))
    if bmi < 18.5:
        print("You are underweight. Go see a doctor.")
    elif 18.5 <= bmi <= 25:
        print("You are in the ideal weight range.")
    else:
        print("You are overweight. Go see a doctor.")

if __name__ == "__main__":
    main()
