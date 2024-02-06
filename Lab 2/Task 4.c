* Programmer: Zaid Bin Naveed
* Date: 6th February 2024

#include <stdio.h>
int main(){
    
int a,b,choice,result;
printf("Enter your first number: ");
scanf("%d",&a);
printf("Enter your second number: ");
scanf("%d",&b);
printf("Enter your second choice(1 for +)(2 for -)(3 for /)(4 for *): ");
scanf("%d",&choice);

switch (choice) {
    case 1:
    result=a+b;
    break;
    case 2:
    result=a-b;
    break;
    case 3:
    result=a/b;
    break;
    case 4:
    result=a*b;
    break;
}    
 printf("Your answer is: %d", result);
    return 0;
}
