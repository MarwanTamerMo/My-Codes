import random

print(" Welcome to my Rock, Paper, Scissors game.")
print(" You must win 2 times to be the final winner of the game :) ")

choices = {"Scissors": 's', "Rock": 'r', "Paper": 'p'}

user_count = 0
comp_count = 0
comp_trial = 1

while comp_trial < 4:

    user_choice = input("Please enter your input: r - (Rock), s - (Scissors), p - (Paper)")

    computer_choice = random.choice(list(choices.values()))

    if user_choice == 's' and computer_choice == 'p':
        user_count += 1
        print("You won this round")
        print("You chose Scissors and the computer chose Paper")

    elif user_choice == 'p' and computer_choice == 'r':
        user_count += 1
        print("You won this round")
        print("You chose Paper and the computer chose Rock ")

    elif user_choice == 'r' and computer_choice == 's':
        user_count += 1
        print("You won this round")
        print("You chose Rock and the computer chose Scissors ")

    elif computer_choice == 's' and user_choice == 'p':
        comp_count += 1
        print("You lost this round")
        print("Computer chose Scissors and you chose  paper ")

    elif computer_choice == 'p' and user_choice == 'r':
        comp_count += 1
        print("You lost this round")
        print("Computer chose Paper and you chose Rock ")

    elif computer_choice == 'r' and user_choice == 's':
        comp_count += 1
        print("You lost this round")
        print("Computer chose Rock and you chose Scissors ")

    else:
        print(" It's a tie ")
        continue

    comp_trial += 1

if user_count >= 2 and comp_count <= 1:
    print(" Congratulations! You are the final winner (You won 2 times) ")
else:
    print("Sorry you lost :( ")
