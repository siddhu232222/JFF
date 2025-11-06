#include <stdio.h>
int linear(int a[10],int n,int key )
{
    for (int i=0;i<n;i++)
    {
        if(key == a[i])
            return i;
    }
    return -1;
}
int main()
{
    int x[10],n,key,i,flag=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    scanf("%d",&key);
    flag = linear(x,n,key);
    if(flag == -1)
        printf("unsucessful search");
    else
        printf("sucessful search and element found at %d",flag+1);

    return 0;
}
