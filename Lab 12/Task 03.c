#include<stdio.h>
int main()
{
    int N;
    printf("Enter size of array : \n");
    scanf("%d",&N);
    int arr[N];
    char arr1[N];
    long long arr2[N];
    printf("Enter elements for first array : \n");
    for(int i =0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("Enter elements for second array : \n");
    for(int i =0;i<N;i++)
    {
        scanf(" %c",&arr1[i]);
    }
     printf("Enter elements for third array : \n");
    for(int i =0;i<N;i++)
    {
        scanf("%lld",&arr2[i]);
    }
    printf("Addresses for the first array : \n");
    for(int i=0;i<N;i++)
    {
         int* x = &arr[i];
         printf("%p\n",x);
    }
        printf("Addresses for the second array : \n");
        for(int i=0;i<N;i++)
    {
          char * y = &arr1[i];
          printf("%p\n",y);
    }
        printf("Addresses for the third array : \n");
        for(int i=0;i<N;i++)
    {
        long long int * z = &arr2[i];
          printf("%p\n",z);
    }
    return 0;
}
