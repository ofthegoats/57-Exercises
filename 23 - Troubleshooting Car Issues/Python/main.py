class Node:
    def __init__(self, output):
        self.yes = None
        self.no  = None
        self.out = output


def getboolinput(output):
    while True:
        a = input(output).lower()
        if a in ["yes", "y", "true", "t"]:
            return True
        if a in ["no", "n", "false", "f"]:
            return False
        else:
            print("Not a valid answer. Use y/n.")
            continue


def main():
    node = root
    while node.yes and node.no: # while node is not terminal
        answer = getboolinput(node.out)
        if answer == True:
            node = node.yes
        elif answer == False:
            node = node.no
    print(node.out)


if __name__ == "__main__":

    # Initialising tree
    root              = Node("Is your car silent when you turn the key? ") #Q
    root.yes          = Node("Are the battery terminals corroded? ")       #Q
    root.yes.yes      = Node("Clean terminal cables and try again.")       #A
    root.yes.no       = Node("Replace cables and try again.")              #A
    root.no           = Node("Does the car make a clicking noise? ")       #Q
    root.no.yes       = Node("Replace the battery.")                       #A
    root.no.no        = Node("Does the car crank up but fail to start?")   #Q
    root.no.no.yes    = Node("Check spark plug conections.")               #A
    root.no.no.no     = Node("Does your car have fuel injection? ")        #Q
    root.no.no.no.yes = Node("Get it in for service.")                     #A  #A
    root.no.no.no.no  = Node("Check to ensure the choke is opening and closing.")

    main()
