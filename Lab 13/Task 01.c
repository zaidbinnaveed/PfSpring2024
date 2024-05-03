#include <stdio.h>

int main() {
        typedef struct student
    {
        int rn;
        char name[20];
        char department[20];
        char course[20];
        int year;
    } stu;
    stu arr[3];
    for(int i=0;i<3;i++)
    {
            printf("Enter roll number : \n");
            scanf("%d",&arr[i].rn);
            printf("Enter name : \n");
            scanf("%s", arr[i].name);
            printf("Enter department : \n");
            scanf("%s", arr[i].department);
            printf("Enter course : \n");
            scanf("%s", arr[i].course);
            printf("Enter year : \n");
            scanf("%d",&arr[i].year);
            printf("\n");
    }
    int year,rn;
    printf("Enter year : \n");
    scanf("%d",&year);
    printf("Enter roll number : \n");
    scanf("%d",&rn);
    printf("Students enetered in the year : %d\n",year);
    for(int i=0;i<3;i++)
    {
            if(year==arr[i].year)
            {
                printf("%s\n",arr[i].name);
            }
    }
    printf("Detail of student with roll number : %d\n",rn);
    for(int i=0;i<3;i++)
    {
                     if(rn==arr[i].rn)
            {
                printf("%d\n",arr[i].rn);
                printf("%s\n",arr[i].name);
                printf("%s\n",arr[i].department);
                printf("%s\n",arr[i].course);
                printf("%d",arr[i].year);
            }
    }
    return 0;
}
