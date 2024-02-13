#include <stdio.h>

int main() {
int num,choice,book,back,days,due;
printf("Enter your number: ");
scanf("%d",&num);

printf("Number of books in the library right now is 50\n");
printf("Do you want to issue a book (1 for yes)(2 for no): ");
scanf("%d",&choice);

switch(choice){
    case 1:
    printf("Enter book number:");
    scanf("%d",&book);
    printf("\nRemaining books=49");
    break;
    case 2:
    printf("Do you want to return a book(1 for yes)(2 for no): ");
    scanf("%d",&back);
    printf("Enter the days after book issuing: ");
    scanf("%d",&days);
    if(days>=7){
        printf("Book returned late. Give $2 as fine.");
    }
    else{
        printf("Book returned successfully.");
    }
    break;
}
    return 0;
}
