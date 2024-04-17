#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    char var;
    int counter=0;
    printf("Enter text:\n");
    fgets(str, sizeof(str), stdin);
    printf("Enter character you want to search for:\n");
    scanf(" %c",&var);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==var)
        {
            counter++;
        }
    }
    if(counter>0)
    {
        printf("Character you entered was found %d times in your text",counter);
    }
    else
    {
        printf("The character you have entered was not found in your text!");
    }
    return 0;
}
