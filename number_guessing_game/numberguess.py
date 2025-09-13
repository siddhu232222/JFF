import random

# Generating a random number between 1 and 1000
correct_answer = random.randint(1, 1000)

attempts = 0

print("Welcome to the Number Guessing Game! ")
print("I'm thinking of a number between 1 and 1000. Can you guess it?")

while True:
    try:
        guess = int(input(" Enter a number between 1 and 1000 : "))
    except ValueError:
        print("Please enter a valid integer.")
        continue

    if guess < 1 or guess > 1000:
        print("The value is not in the given boundary.")
        continue

    attempts += 1

    if guess > correct_answer:
        print("The guess is high.")
    elif guess < correct_answer:
        print("The guess is low.")
    else:
        print(f"Congratulations! You guessed the correct number in {attempts} attempts! ")
        break
