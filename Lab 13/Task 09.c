#include <stdio.h>
#include<string.h>

int main()
{
        struct Register
        {
            int CourseId;
            char CourseName[15];
        } ;
    typedef struct Student
    {
        int id;
        char firstName[15];
        char lastName[15];
        int cellno;
        char email[15];
        struct Register course;
    } a;
    a std[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter Student Id : \n");
        scanf("%d",&std[i].id);
        while(getchar() != '\n');
        puts("Enter first name : ");
        scanf("%[^\n]", std[i].firstName);
        while(getchar() != '\n');
        puts("Enter last name : ");
        scanf("%[^\n]", std[i].lastName);
        printf("Enter cell no : \n");
        scanf("%d",&std[i].cellno);
        while(getchar() != '\n');
        puts("Enter email : ");
        scanf("%[^\n]", std[i].email);
        puts("Enter course id : ");
        scanf("%d",&std[i].course.CourseId);
        while(getchar() != '\n');
        puts("Enter course name : ");
        scanf("%[^\n]", std[i].course.CourseName);
        printf("\n");
    }
        for(int i=0;i<5;i++)
    {
        printf("Student Id : %d\n",std[i].id);
        printf("First name : %s\n",std[i].firstName);
        printf("Last name : %s\n",std[i].lastName);
        printf("Cell no : %d\n",std[i].cellno);
        printf("Email Address : %s\n",std[i].email);
        printf("Course Id : %d\n",std[i].course.CourseId);
        printf("Course Name : %s\n",std[i].course.CourseName);
        printf("\n");
    }
    return 0;
}
