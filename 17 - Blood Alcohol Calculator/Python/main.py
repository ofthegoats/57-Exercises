def input_float(output):
    while True:
        try:
            f = float(input(output))
            return f
        except ValueError:
            continue
        # return


def calculate_BAC(A, W, r, H):
    return (A * 5.14/W * r) - 0.015 * H


def main():
    alcohol = input_float("How much alcohol have you consumed in ounces? ")
    weight  = input_float("What is your weight in pounds? ")
    hours   = input_float("How many hours ago was your last drink? ")

    bac     = 0

    sex     = ""
    MALE    = ["male", "m", "man"]
    FEMALE  = ["female", "f", "woman"]
    # loop until the sex given is a biological sex, we don't care about gender.
    while ( sex not in MALE ) and ( sex not in FEMALE ):
        sex = input("Are you male or female? ")
        if sex in MALE:
            bac = calculate_BAC(alcohol, weight, 0.73, hours)
            print(bac)
        elif sex in FEMALE:
            bac = calculate_BAC(alcohol, weight, 0.66, hours)
            print(bac)
        else:
            print("Your biological sex is required to calculate your blood \
                    alcohol content.")
 
    if bac >= 0.08: print("It's not legal for you to drive.")
    else:           print("It's legal for you to drive.")


if __name__ == "__main__":
    main()
