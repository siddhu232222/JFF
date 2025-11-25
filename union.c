#include <stdio.h>

int main()

{

{

union student

char name[25];

int rollno;

char course [7];

float marks;

};

union student s;

printf("Enter Name : \n");

scanf("%s", &s.name);

printf("Name: %s\n",s.name);

printf("Enter Roll No: \n");

scanf("%d", &s.rollno);

printf("Roll No: %d\n",s.rollno);

printf("Enter Course : \n");

scanf("%s", &s.course);

printf("Course: %s\n",s.course);

printf("Enter Marks : \n");

scanf("%f",&s.marks);

printf("Marks: %f\n",s.marks);

return 0;

}