* Programmer: Zaid Bin Naveed
* Date: 6th February 2024


#include <stdio.h>

int main() {
int a,b;
printf("Enter your first number: ");
scanf("%d",&a);
printf("Enter your second number: ");
scanf("%d",&b);

if(a>b){
    printf("%d is greater than %d",a,b);
}
else if(a==b){
    printf("%d is equal to %d",a,b);
}
else{
    printf("%d is greater than %d",b,a);
}

    return 0;
}
