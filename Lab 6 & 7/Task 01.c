#include<stdio.h>
int main()
{
    int n,m,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter your second number: ");
    scanf("%d",&m);
    for(int i=n;i<=m;i++)
    {
    for(int j=1;j<=10;j++)
    {
        sum=n*j;
        printf("%d\n",sum);    
    }
    n++;
    }

        
}
