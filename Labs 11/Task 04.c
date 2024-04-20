#include<stdio.h>
#include<string.h>
int main()
{
    int result;
    char storedpassword[50]="secure123";
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
    else
    {result=strcmp( enterpassword, storedpassword);
    if (result==0)
    {
        printf("Login Successful. Welcome!\n");
    }
    else
    {
        printf("Login Failed! Incorrect password.\n");

    }
    }
    return 0;
}
