// 1 . with parameters and with return values
#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("Factorial is %d\n", factorial(n));
    return 0;
}



// 2 . with parameters and without return values
#include <stdio.h>
void factorial(int n)
{
    int fact=1;
    for (int i=1;i<=n;i++)
        fact = fact*i;
    printf("factorial is %d",fact);
}
int main()
{
    int n;
    scanf("%d",&n);
    factorial(n);
    return 0;
}



// 3 . without parameters and with return values
#include <stdio.h>
int factorial()
{
    int n, i, fact = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}
int main()
{
    int result;
    result = factorial();
    printf("factorial is %d\n", result);
    return 0;
}



// 4 . without parameters and without return values
#include <stdio.h>
void factorial()
{
    int n,i,fact=1;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        fact = fact*i;
    printf("factorial is %d",fact);
}
int main()
{
    factorial();
    return 0;
}

