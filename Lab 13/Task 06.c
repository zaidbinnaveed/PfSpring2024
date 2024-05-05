#include <stdio.h>
#include<string.h>

int leapyear(int year)
{
    return(year%4==0 && year%100!=0) || (year%400==0);
}

int daysInMonth(int month, int year)
{
    int days[] = {31, 28 + leapyear(year), 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};
    return days[month -1];
}

void addDays(int* day,int* month,int* year, int daysToAdd)
{
        while (daysToAdd > 0) {
        int daysInCurrentMonth = daysInMonth(*month, *year);
        if (*day + daysToAdd <= daysInCurrentMonth) {
            *day += daysToAdd;
            break;
        } else {
            daysToAdd -= (daysInCurrentMonth - *day + 1);
            *day = 1;
            if (*month == 12) {
                *month = 1;
                (*year)++;
            } else {
                (*month)++;
            }
        }
    }
}

int main() {
    typedef struct date
    {
        int day;
        int month;
        int year;
    } a;
    a date;
    date.day = 24;
    date.month = 05;
    date.year = 2004;
    
    printf("Date : %02d/%02d/%02d\n",date.day,date.month,date.year);
    
    addDays(&date.day, &date.month, &date.year, 30);
    
    printf("Updated Date: %02d/%02d/%04d\n", date.day, date.month, date.year);
    
    return 0;
}
