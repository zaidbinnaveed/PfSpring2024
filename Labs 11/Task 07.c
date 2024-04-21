#include<stdio.h>

int calculateDiscount(int tp, int tn)
{
    int price;
    if(tp>=50 && tn>10)
    {
        price=tp-(0.15*tp);
    }
    else if(tp>30 && tn>5)
    {
        price=tp-(0.1*tp);
    }
    else
    {
        price=tp;
    }
    return price;
}
int main()
{
    int tp,tn,price;
    printf("Enter total price:\n");
    scanf("%d",&tp);
    printf("Enter total number of times you have visited the cafe:\n");
    scanf("%d",&tn);
    price=calculateDiscount(tp,tn);
    printf("Your total amount will be:%d\n",price);
    return 0;
}
