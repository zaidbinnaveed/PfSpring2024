#include <stdio.h>
#include<string.h>

int main() {
    typedef struct information
    {
        char name[20];
        float salary;
        int hoursPerDay;
    } a,b;
    a emp1;
    strcpy(emp1.name,"Zaid Bin Naveed");
    emp1.salary = 150000;
    emp1.hoursPerDay = 12;
    
    b emp2;
    strcpy(emp2.name,"Amna Asim Khan");
    emp2.salary = 130000;
    emp2.hoursPerDay = 10;
    
    if(emp1.hoursPerDay==10)
    {
        emp1.salary = emp1.salary + 50;
    }
    else if(emp1.hoursPerDay>=12)
    {
        emp1.salary = emp1.salary + 100;
    }
    if(emp2.hoursPerDay==10)
    {
        emp2.salary = emp2.salary + 50;
    }
    else if(emp2.hoursPerDay>=12)
    {
        emp2.salary = emp2.salary + 100;
    }
    printf("Employee 1 information : \n");
    printf("Name : %s\n",emp1.name);
    printf("Salary : $%.1f\n",emp1.salary);
    printf("Hours worked per day : %d\n",emp1.hoursPerDay);
    
    printf("\nEmployee 2 information : \n");
    printf("Name : %s\n",emp2.name);
    printf("Salary : $%.1f\n",emp2.salary);
    printf("Hours worked per day : %d\n",emp2.hoursPerDay);
    
    return 0;
}
