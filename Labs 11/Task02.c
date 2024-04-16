#include<stdio.h>
int add(int a,int b)
{
    int result=a+b;
    return result;
}
int subtract(int a, int b)
{
    int result=a-b;
    return result; 
}
int multiply(int a, int b)
{
    int result=a*b;
    return result;
}
int divide(int a, int b)
{
    int result=a/b;
    return result;
}
int main()
{
    int a,b,result;
    char choice;
    printf("Enter first number:\n");
    scanf("%d",&a);
    printf("Enter second number:\n");
    scanf("%d",&b);
    
    printf("What operation would you like to perform:\n");
    printf("1. +\n");
    printf("2. -\n");
    printf("3. *\n");
    printf("4. /\n");
    scanf(" %c",&choice);

    switch(choice)
    {
        case '+':
        result=add(a,b);
        printf("Your answer is:%d\n",result);
        break;
        case '-':
        result=subtract(a,b);
        printf("Your answer is:%d\n",result);
        break;
        case '*':
        result=multiply(a,b);
        printf("Your answer is:%d\n",result);
        break;
        case '/':
        result=divide(a,b);
        printf("Your answer is:%d\n",result);
        break;
        default:
        printf("Error!Wrong choice entered!Please try again!");
        break;
    }
    return 0;
}
