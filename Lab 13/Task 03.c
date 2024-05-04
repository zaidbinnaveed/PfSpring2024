#include <stdio.h>
  struct date
    {
        int day;
        int month;
        int year;
    };

int compare(struct date a, struct date b)
{
    if(a.day==b.day && a.month==b.month && a.year==b.year)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    struct date a;
    struct date b;
    
    printf("Enter date (dd mm yy) : \n");
    scanf("%d %d %d", &a.day, &a.month, &a.year);
    printf("Enter date (dd mm yy) : \n");
    scanf("%d %d %d",&b.day, &b.month, &b.year);
    if(compare(a,b)==1)
    {
        printf("The dates entered are the same");
    }
    else
    {
        printf("The dates entered are not the same");
    }
    return 0;
}
