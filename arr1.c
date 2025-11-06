#include <stdio.h>
int main()
{

    int n,i,a[7],ele,pos;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element and position to insert \n");
    scanf("%d%d",&ele,&pos);
    if(pos<=n)
    {
        for (i =n-1 ;i>=pos-1;i--)
        {
            a[i+1] = a[i];
            a[pos-1]= ele;
            n++;
        }
        for(i=0;i<n;i++)
            printf("%d\n",a[i]);
    }
    else
        printf("insertion is not possible\n");

    return 0;
}
