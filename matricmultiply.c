#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3];
    int p,q,m,n,i,j,k;
    printf("enter the size of 1st matrix\n");
    scanf("%d%d",&m,&n);
    printf("enter the size of 2nd matrix\n");
    scanf("%d%d",&p,&q);
    if (n==p){
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
        for(i=0;i<p;i++)
            for(j=0;j<q;j++)
            scanf("%d",&b[i][j]);
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
        printf("the result of matrix multiplication is \n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++)
                printf("%d\t",c[i][j]);
            printf("\n");
        }
    }
    else
        printf("matrix multiplication is not possible\n");

    return 0;
}
