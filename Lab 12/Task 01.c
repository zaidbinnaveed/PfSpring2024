#include<stdio.h>

void swap(int* a, int*b) // Pointers were not declared to store addresses and access the values stored at that address
{
    int temp;
    temp=*a; // Since addresses were not being sent, the values stored at those addresses were not being accessed and so were not being swapped, instead, values which were different were being swapped.
    *a=*b;
    *b=temp;
    return;
}

int main()
{
    int j=2, k=5;
    printf("j=%d, k=%d\n",j,k);
    swap(&j, &k); // Address was not sent of the variables, instead values were sent which will be different because of function parameters.
    printf("j=%d, k=%d\n",j,k);
    return 0;
}
