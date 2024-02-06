* Programmer: Zaid Bin Naveed
* Date: 6th February 2024


#include <stdio.h>

int main() {
    int choice,b,cost,d;
    printf("What is your choice (1 for potato for 1.75)(2 for tomato for 2.50)(3 for carrot for 3): ");
    scanf("%d",&choice);
     switch(choice){
         case 1:
         printf("Potato\n");
         break;
         case 2:
         printf("Tomato\n");
         break;
         case 3:
         printf("Carrot\n");
         break;
     }
     printf("Enter the quantity you want to buy: ");
     scanf("%d",&b);
if(choice==1){
    cost=1.75*b;
    printf("The total cost is:%d\n",cost);
}
else if(choice ==2){
    cost=2.50*b;
    printf("The total cost is:%d\n",cost);
}
else{
    cost=3*b;
    printf("The total cost is:%d\n",cost);
}
if(cost>100){
    cost=cost-(cost*(0.1));
    printf("Total cost after discount is: %d",cost);
}
else{
    printf("Discount = 0");
}
    return 0;
}
