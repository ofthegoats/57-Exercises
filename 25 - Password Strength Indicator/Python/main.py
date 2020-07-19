from string import ascii_letters, digits, punctuation


def hasnumbers(string):
    for letter in string:
        if letter in digits:
            return True
    return False


def hasletters(string):
    for letter in string:
        if letter in ascii_letters:
            return True
    return False


def hasspecial(string):
    for letter in string:
        if letter in punctuation:
            return True
    return False


def passwordValidator(password):
    """
    returns strength of password as a number in range 1 - 4
    0 - very weak
    1 - weak
    2 - strong
    3 - very strong
    """
    has_numbers = hasnumbers(password)
    has_letters = hasletters(password)
    has_special = hasspecial(password)
    pas_length = len(password)

    if pas_length < 8:  # must be one of the "weak" passwords
        if has_letters ^ has_numbers ^ has_special:
            return 0  # very weak
        else:
            return 1  # weak
    else:  # must be one of the "strong" passwords
        if has_letters and has_numbers and has_special:
            return 3  # very strong
        else:
            return 2  # strong


def main():
    password = input("What is the password to check? ")
    password_strength = passwordValidator(password)

    if password_strength == 0:
        print('"{}" is a very weak password.'.format(password))
    elif password_strength == 1:
        print('"{}" is a weak password.'.format(password))
    elif password_strength == 2:
        print('"{}" is a strong password.'.format(password))
    elif password_strength == 3:
        print('"{}" is a very strong password.'.format(password))


if __name__ == "__main__":
    main()
