#include<stdio.h>
int main()
{
int grade,marks;
printf("Enter your marks: ");
scanf("%d",&marks);
	marks>=90 ? printf("A")
	: marks>=80 ? printf("B")
	: marks>=70 ? printf("C")
	: marks>=60 ? printf("D")
	: printf("Failed");
	
	return 0;
}
