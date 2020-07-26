import regex as re


def validname(NAME):
    if not bool(NAME):
        print("Name must be filled in.")
        return False
    if bool(re.search(r"\d", NAME)):
        print('"{}" is not a valid name. It contains digits.'.format(NAME))
        return False
    if len(NAME) <= 2:
        print('"{}" is not a valid name. It is too short.'.format(NAME))
        return False
    return True


def validid(ID):
    if not bool(ID):
        print("employee ID must be filled in.")
        return False
    if bool(re.search(r"^[a-zA-Z]{2}-\d{4}$", ID)):
        return True
    else:
        print("The ID must be numeric.")
        return False


def validzip(ZIP):
    if not bool(ZIP):
        print("ZIP code must be filled in.")
        return False
    if bool(re.search(r"^\d+$", ZIP)):
        return True
    else:
        print("The ZIP code must be numeric.")
        return False


def validateInput(firstname, lastname, zipcode, employeeid):
    validfn = validname(firstname)
    validln = validname(lastname)
    validzc = validzip(zipcode)
    valided = validid(employeeid)

    if validfn and validln and validzc and valided:
        return True
    else:
        return False


def main():
    firstname = input("Enter the first name: ")
    lastname = input("Enter the last name: ")
    zipcode = input("Enter the ZIP code: ")
    employeeid = input("Enter an employee ID: ")
    valid = validateInput(firstname, lastname, zipcode, employeeid)
    if valid:
        print("There were no errors found.")
    else:
        print("There were errors found.")


if __name__ == "__main__":
    main()
