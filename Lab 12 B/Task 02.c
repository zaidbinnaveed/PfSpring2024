#include<stdio.h>
int multiply(int a, int b)
{
    if(b==0) return 0;
    else if(b<0) return -multiply(a,-b);
    return a + multiply(a, b-1);
}
int main()
{
    int a,b,result;
    printf("Enter a : \n");
    scanf("%d",&a);
    printf("Enter b : \n");
    scanf("%d",&b);
    result=multiply(a,b);
    printf("Your answer is %d",result);
    return 0;
}
