#include<stdio.h>
int main()
{
    struct Employee
    {
        int employee_id;
        char name[50];
        int salary;
    };
    struct Organisation
    {
        char organisation_name[50];
        int organisation_number;
        struct Employee emp;
    } org;
    printf("Enter Organization name : \n");
    scanf("%49[^\n]", org.organisation_name);
    printf("Enter Organisation Number : \n");
    scanf("%d",&org.organisation_number);
    printf("Enter employee id : \n");
    scanf("%d",&org.emp.employee_id);
    printf("Enter employee name : \n");
    scanf("%49s", org.emp.name);
    printf("Enter salary : \n");
    scanf("%d",&org.emp.salary);
    
    printf("Organization name: %s\n", org.organisation_name);
    printf("Organisation Number: %d\n", org.organisation_number);
    printf("Employee ID: %d\n", org.emp.employee_id);
    printf("Employee Name: %s\n", org.emp.name);
    printf("Salary: %d\n", org.emp.salary);
    
    return 0;
}
