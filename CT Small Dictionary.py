dict = {"Decomposition": "It's Breaking the problem down into smaller, more manageable parts.",
        "Algorithmic thinking": "Creating a set of ordered steps (sequencing) and then doing them in a particular order to solve a problem or accomplish a task in a way that could be repeated by others (using an algorithm).",
        "Pattern recognition": "It's the process of identifying patterns in a data set to categorize, process and resolve the information more effectively.",
        "Program": "A program is a set of instructions that a computer follows in order to perform a particular task.",
        "Computational thinking": "Computational thinking is an approach to problem-solving that involves using a set of practices and principles from computer science to formulate a solution that’s executable by a computer. It’s not just for programmers. In fact, it’s applicable in a diverse array of fields.",
        "Algorithm": "An algorithm is a procedure used for solving a problem or performing a computation. Algorithms act as an exact list of instructions that conduct specified actions step by step in either hardware- or software-based routines.",
        "Abstraction": "Abstraction involves removing unnecessary detail from a problem so that you can focus on the essentials"}

print("Welcome to Computational thinking (CT) dictionary")
print(
    "-Algorithmic thinking-\n-Algorithm-\n-Pattern recognition-\n-Computational thinking-\n-Algorithm-\n-Abstraction-\n-Program-\n-Decomposition-\n")

while True:
    user_choice = input("Please enter the word you want its definition ")

    if user_choice == "Decomposition":
        print(dict["Decomposition"], "\n")

    elif user_choice == "Algorithmic thinking":
        print(dict["Algorithmic thinking"], "\n")

    elif user_choice == "Pattern recognition":
        print(dict["Pattern recognition"], "\n")

    elif user_choice == "Program":
        print(dict["Program"], "\n")

    elif user_choice == "Algorithm":
        print(dict["Algorithm"], "\n")

    elif user_choice == "Abstraction":
        print(dict["Abstraction"], "\n")

    elif user_choice == "Computational thinking":
        print(dict["Computational thinking"], "\n")
    else:
        print("Invalid input, please enter the name as shown in the table")
        continue
    next_loop = input("Do you want another definition? (y for yes/ n for no)")
    if next_loop == 'n':
        print("Thanks")
        break
