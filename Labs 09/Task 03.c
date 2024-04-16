#include<stdio.h>
int main()
{
    int arr[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int max=arr[0][0];
    int max_i,max_j;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(max<arr[i][j])
            {
                max=arr[i][j];
                max_i=i;
                max_j=j;
            }
        }
    }
    printf("Maximum element in the array is %d\n",max);
    printf("Row number %d and column number %d",max_i,max_j);
    return 0;
}
