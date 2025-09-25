#for right angle triangle :   #1
n = int(input("n : "))
for i in range(n):
    for j in range(i+1):
        print("*",end=" ")
    print()

'''
output :

n : 5
* 
* * 
* * * 
* * * * 
* * * * * 

'''