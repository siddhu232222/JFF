#include <stdio.h>
int main()
{
    struct student
    {
        char name[25];
        int s_id;
        float m1,m2;
    };
    struct student s1[3];
    printf("Enter student details\n");
    for(int i=0;i<3;i++)
        scanf("%s%d%f%f",&s1[i].name,&s1[i].s_id,&s1[i].m1,&s1[i].m2);
    for(int i=0;i<3;i++)
    {
        printf("Name: %s\n",s1[i].name);
        printf("Roll no: %d\n",s1[i].s_id);
        printf("Total marks: %f\n",s1[i].m1+s1[i].m2);
    }
    return 0;
}
