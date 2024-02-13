#include<stdio.h>
int main(){
	int pin,choice,money,transfer;
	printf("Enter your pin: ");
	scanf("%d",&pin);
	
	if(pin==1234){
		printf("Choose the number for the corresponding function(1 for account balance)(2 to withdraw money)(3 to deposit money)(4 to exit):\n ");
		scanf("%d",&choice);
		if(choice==1){
			printf("63,500");
		}
		else if(choice==2){
			printf("Enter the amount to be withdrawn: ");
			scanf("%d",&money);
			printf("Amount withdrawn:%d\n",money);
			money=63500-money;
			printf("Amount remaining:%d",money);
		}
		else if(choice==3){
			printf("Please visit our nearest branch to deposit money as this is beyond my capabilities");
		}
		else{
			printf("Thank your banking with us!");
		}
	}
	return 0;
}
