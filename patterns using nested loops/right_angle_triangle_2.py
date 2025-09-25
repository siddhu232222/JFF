#inverted right angle triangle along x-axis : #2
n = int(input("n = "))
for i in range(n):
    for j in range(n):
        print("*",end=" ")
    print()
    n-=1

'''
output:

n = 5
* * * * * 
* * * *
* * *
* *
*

'''