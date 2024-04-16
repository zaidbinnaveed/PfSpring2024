#include<stdio.h>
int main()
{
    int arr[3][3];
    int arr2[3][3];
    int res[3][3];
    int i,j,k;
    printf("Enter elements of first array: \n");
    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements of second array: \n");
        for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("\n");
    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            res[i][j]=0;
            for( k=0;k<3;k++)
            {
                res[i][j]+=(arr[i][k]*arr2[k][j]);
            }
        }
    }
    printf("\n");
    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
