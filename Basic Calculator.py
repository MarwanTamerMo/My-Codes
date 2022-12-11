# Function to add two numbers
def add(x, y):
    return x + y


# Function to subtract two numbers
def sub(x, y):
    return x - y


# Function to multiply two numbers
def mult(x, y):
    return x * y


# Function to divide two numbers
def div(x, y):
    return x / y


print("Welcome to my calculator\n")
print(" 1 - Add\n 2 - Subtraction\n 3 - Multiplication\n 4 - Division")

while True:
    user_input = (input(" Please enter the computation you want "))

    if user_input in ('1', '2', '3', '4'):
        first_number = float(input("Enter the first number "))
        second_number = float(input("Enter the second number "))

        if user_input == '1':
            print(first_number, " + ", second_number, " = ", add(first_number, second_number))

        elif user_input == '2':
            print(first_number, " - ", second_number, " = ", sub(first_number, second_number))

        elif user_input == '3':
            print(first_number, " * ", second_number, " = ", mult(first_number, second_number))

        elif user_input == '4':
            print(first_number, " / ", second_number, " = ", div(first_number, second_number))

        next_computation = input(" Do you want to make another computation? Enter (y for yes /n for no) ")
        if next_computation == 'n':
            print(" Thanks ")
            break
    else:
        print(" Wrong input ")
