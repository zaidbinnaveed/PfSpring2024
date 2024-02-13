#include<stdio.h>
int main(){
int length;
int area,volume,shape;
printf("Enter your choice for shape(1 for cube)(2 for sphere): ");
scanf("%d",&shape);
if(shape==1){
	printf("Enter length: ");
	scanf("%d",&length);
	area=length*length;
	printf("Area=%d\n",area);
	volume=length*length*length;
	printf("Volume=%d",volume);
}
else if(shape==2){
	printf("Enter length: ");
	scanf("%d",&length);
	area=4*3.14*length*length;
	printf("Area=%d\n",area);
	volume=1.33*3.14*length*length*length;
	 printf("Volume=%d",volume);   
}
else{
	printf("Wrong choice entered! Try again.");
}
return 0;
}
