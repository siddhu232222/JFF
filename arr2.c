#include <stdio.h>
int main()
{
    int n,i,a[7],ele,pos;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the position to delete \n");
    scanf("%d",&pos);
    if(pos<=n)
    {
        printf("element deleted is %d\n",a[pos-1]);
        for(i = pos-1;i<n;i++)
        {
            a[i] = a[i + 1];
            n--;
        }
        for(i = 0;i<n;i++)
                printf("%d\n",a[i]);

    }
    else
        printf("deletion is not possible\n");


    return 0;
}

