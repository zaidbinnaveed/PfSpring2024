#include<stdio.h>
int main()
{
    int choice,n;
    int nsp=7/2;
    int nst=1;
    int ml = 7/2+1;
    printf("Welcome to the Pattern Printing Game!\n");
    printf("Enter your choice of pattern you want to print:\n1 for Triangle\n2 for Pyramid\n3 for Diamond \n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
    for(int i =1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }   
    break;
    case 2:
    printf("Enter number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    break;
    case 3:
    for (int i=1;i<=7;i++)
    {
        for(int j=1;j<=nsp;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=nst;k++)
        {
            printf("*");
        }
        if(i<ml)
        {
            nsp--;
            nst+=2;
        }
        else
        {
            nsp++;
            nst-=2;
        }
        printf("\n"); 
    }  
    break; 
    default:
    printf("Wrong choice entered! Choose again!");
        break;
    }
    return 0;
}
