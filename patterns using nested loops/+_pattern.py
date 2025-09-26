while True:
    size = int(input("Enter an odd number for + pattern: "))
    if size % 2 != 0:
        break
    print("Even number entered. Please enter an odd number.")

center = size // 2

for i in range(size):
    for j in range(size):
        if i == center or j == center:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()


'''
output:

Enter an odd number for + pattern: 5
    *     
    *
* * * * *
    *
    *

'''