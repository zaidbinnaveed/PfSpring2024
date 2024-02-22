#include <stdio.h>

int main() {
int n,sum;
printf("Enter a number: ");
scanf("%d",&n);
sum=1;
for(int i=0;i=n;i++){
sum=n*sum;
n--;
}
printf("%d",sum);
    return 0;
}
