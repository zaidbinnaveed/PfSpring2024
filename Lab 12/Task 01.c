#include<stdio.h>

void swap(int* a, int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}

int main()
{
    int j=2, k=5;
    printf("j=%d, k=%d\n",j,k);
    swap(&j, &k);
    printf("j=%d, k=%d\n",j,k);
    return 0;
}
