#include<stdio.h>
#include<string.h>
int main()
{
    int result;
    char storedpassword[50]="zazoo2004";
    char enterpassword[50];
    printf("Enter password:\n");
    fgets(enterpassword,sizeof(enterpassword),stdin);
    if (enterpassword[strlen(enterpassword) - 1] == '\n')
    {
    enterpassword[strlen(enterpassword) - 1] = '\0';
    }
    if(strlen(enterpassword)<8)
    {
        printf("Password entered is too short! Try again!\n");
    }
    result=strcmp( enterpassword, storedpassword);
    if (result==0)
    {
        printf("Correct password entered! Welcome!\n");
    }
    else
    {
        printf("Incorrect password entered! Try again!\n");

    }
    return 0;
}
