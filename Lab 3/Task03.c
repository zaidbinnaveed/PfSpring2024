#include<stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(num>7){
		printf("Invalid number entered. Try again.");
	}
	else if(num==0){
		printf("Invalid number entered. Try again.");
	}
	
	switch(num){
		case 1:
			printf("Sunday");
			break;

			
		case 2:
			printf("Monday");
			break;
					
		case 3:
			printf("Tuesday");
			break;
			
		case 4:	
			printf("Wednesday");
			break;
			
		case 5:
			printf("Thursday");
			break;
			
		case 6:
			printf("Friday");
			break;

			
		case 7:
			printf("Saturday");
			break;
	}
	return 0;
}
