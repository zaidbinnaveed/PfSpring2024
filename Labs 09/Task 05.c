#include<stdio.h>
int main()
{
    int arr[3][3];
    int max,min,saddle;
    int i,j,k;
    int counter=0,is_saddle;
    int saddle_points[3 * 3][2];
    printf("Enter elements of your array: \n");
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
   for(i=0;i<3;i++)
   {
       for(j=i;j<3;j++)
       {
           is_saddle=1;
           for(k=0;k<3;k++)
           {
               if(arr[i][j]<arr[i][k] && k!=j)
               {
                   is_saddle=0;
                   break;
               }
           }
           is_saddle=1;
           for(k=0;k<3;k++)
           {
               if(arr[i][j]>arr[k][j] && k!=i)
               {
                   is_saddle=0;
                   break;
               }
       }
   }
   if(is_saddle)
   {
       saddle_points[counter][0] = i;
       saddle_points[counter][1] = j;
       counter++;
   }
}
 
  printf("The number of saddle points in this array are: %d\n", counter);
    printf("The saddle points are:\n");
    for (i = 0; i < counter; i++) {
        printf("(%d, %d): %d\n", saddle_points[i][0], saddle_points[i][1], arr[saddle_points[i][0]][saddle_points[i][1]]);
    }
    return 0;
}
