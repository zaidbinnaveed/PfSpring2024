#include <stdio.h>

int main() {
int n,a,b,sum;
printf("Enter your range: ");
scanf("%d",&n);
a=0,b=1;

for(int i=1;i<=n;i++){
    sum=a+b;
    printf("%d\n",sum);
    a=b;
    b=sum;
}
    return 0;
}
