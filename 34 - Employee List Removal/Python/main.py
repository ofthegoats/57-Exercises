def print_list(l):
    for i in l:
        print(i)


def main():
    employees = [
        "alice",
        "bob",
        "charlie",
        "dave",
        "eve",
    ]
    print(f"There are {len(employees)} employees:")
    print_list(employees)
    name_to_rm = input("\nEnter an employee name to remove: ")
    if name_to_rm not in employees:
        print("That employee does not exist.")
    else:
        employees.remove(name_to_rm)
        print(f"\nThere are {len(employees)} employees:")
        print_list(employees)


if __name__ == "__main__":
    main()
