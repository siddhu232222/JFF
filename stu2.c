#include <stdio.h>
int main()
{
    struct student
    {
        char name[25];
        int rollno;
        float m1,m2;
    };
    struct student s1[3];
    struct student *sptr;
    sptr = &s1[0];
    for(int i=0;i<3;i++)
    {
        scanf("%s%d%f%f", &sptr->name, &sptr->rollno, &sptr->m1, &sptr->m2);
        sptr++;
    }
    sptr = &s1[0];
    for(int i=0;i<3;i++)
    {
        printf("Name: %s\n", sptr->name);
        printf("Roll no: %d\n", sptr->rollno);
        printf("Total marks: %f\n", sptr->m1 + sptr->m2);
        sptr++;
    }
    return 0;
}
