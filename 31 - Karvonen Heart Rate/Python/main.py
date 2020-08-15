def bpm(i, r, a):
    return (((220 - a) - r) * i) + r

def main():
    resting = int(input("Resting pulse: "))
    age = int(input("Age: "))

    print("Intensity | Rate")
    print("----------|-----")
    for i in range(55,95+1,5):
        print(f"{i}%" + " "*7 + "|" + f" {bpm(i/100, resting, age)} bpm")

if __name__ == "__main__":
    main()
