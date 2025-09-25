# inverted of #2 along y :
n = int(input("n = "))
for i in range(n):
    for j in range(i):
        print(" ",end=" ")
    for j in range(n - i):
        print("*",end=" ")
    print()

'''
output:

n = 5
* * * * * 
  * * * *
    * * *
      * *
        *
        
'''