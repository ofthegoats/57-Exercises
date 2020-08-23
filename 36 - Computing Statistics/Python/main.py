from math import sqrt


def generate_list_ints(output):
    l = list()
    while True:
        inp = input(output)
        if inp != "":
            try:
                l.append(int(inp))
            except ValueError:
                print("NaN")
        else:
            return l


def mean(nums):
    return sum(nums) / len(nums)


def standard_deviation(nums):
    meann = mean(nums)
    nums = [((i - meann) ** 2) for i in nums]
    return sqrt(sum(nums) / (len(nums) - 1))


def main():
    times = generate_list_ints("Enter a number: ")
    print(f"Average: {mean(times)}")
    print(f"Maximum: {max(times)}")
    print(f"Minimum: {min(times)}")
    print(f"Standard deviation: {standard_deviation(times)}")


if __name__ == "__main__":
    main()
