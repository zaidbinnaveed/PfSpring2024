#include<stdio.h>
int decideCarUsage(int day, int cn)
{
    if(day<0 || day>7)
    {
        printf("Day does not exist!");
        return -1;
    }
    else if(day%2==0 && cn%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int day,cn,result;
    printf("Enter day number:\n");
    scanf("%d",&day);
    printf("Enter car number:\n");
    scanf("%d",&cn);
    result=decideCarUsage(day,cn);
    if(result==1)
    {
        printf("Car can be used\n");
    }
    else
    {
        printf("Car cannot be used");
    }
    return 0;
}
