while True:
    size = int(input("Enter an odd number for X pattern: "))
    if size % 2 != 0:
        break
    print("Even number entered. Please enter an odd number.")


for i in range(size):
    for j in range(size):
        if j == i or j == size - i - 1:
            print("*", end=" ")
        else:
            print(" ", end=" ")
    print()


'''
output:

Enter an odd number for X pattern: 5
*       * 
  *   *
    *
  *   *
*       *

'''