# this is a code for simple calculator using python

try:
    num1 = float(input("Enter num1: "))
    num2 = float(input("Enter num2: "))
except ValueError:
    print("Invalid input! Please enter numeric values.")
    exit()

print("1 or + for addition")
print("2 or - for subtraction")
print("3 or * for multiplication")
print("4 or / for division")
operation = input("Enter operation: ")

if operation == "1" or operation == "+":
    result = num1 + num2
    print(f"Result: {num1} + {num2} = {result}")

elif operation == "2" or operation == "-":
    result = num1 - num2
    print(f"Result: {num1} - {num2} = {result}")

elif operation == "3" or operation == "*":
    result = num1 * num2
    print(f"Result: {num1} * {num2} = {result}")

elif operation == "4" or operation == "/":
    if num2 == 0:
        print("Error: Division by zero is not allowed.")
    else:
        result = num1 / num2
        print(f"Result: {num1} / {num2} = {result}")

else:
    print(f"{operation} is an invalid operation")