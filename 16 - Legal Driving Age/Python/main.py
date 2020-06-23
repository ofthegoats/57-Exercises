"""
following constraints set in book: one output statement + a ternary operator
"""

def main():
    print( "You are old enough to legally drive." if int(input("What is your age? ")) >= 16 else "You are not old enough to legally drive." )

if __name__ == "__main__":
    main()
