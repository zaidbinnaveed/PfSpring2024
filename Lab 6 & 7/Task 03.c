#include <stdio.h>

int main() {
int n,r,temp,sum=0;
printf("Enter a number: ");
scanf("%d",&n);
temp=n;
int counter=0;
do
{
    r=n%10;
    sum=(sum*10)+r;
    n=n/10;
    counter++;
} while(n>0);
if(counter!=5)
{
    printf("Error! Number entered must be a 5 digit number!");
}
else
{
   if(temp==sum)
    {
        printf("Your number is palindrome");
    }
    else
    {
        printf("Your number is not palindrome");
    } 
}
    return 0;
}
