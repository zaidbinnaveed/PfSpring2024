#include <stdio.h>
#include<string.h>

int main()
{
    int i;
    typedef struct books
    {
        char name[20];
        char author[20];
        int books[5];
    } a;
    a library[5];
    int num_books=0;
    for( i=0;i<5;i++)
    {
        printf("Enter author name :\n");
        fgets(library[i].author,sizeof(library[i].author),stdin);
        printf("Enter book title : \n");
        fgets(library[i].name,sizeof(library[i].name),stdin);
        num_books++;
        printf("\n");
    }
    int choice;
    printf("Enter choice : \n");
    printf("1.Display book information\n");
    printf("2.Add a new book\n");
    printf("3.Display all the books in the library of a particular author\n");
    printf("4.Display the number of books of a particular title\n");
    printf("5.Display the total number of books in the library\n");
    printf("6.Issue a book\n");
    printf("7.Exit\n");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        char name2[20];
        printf("Enter book name: \n");
        scanf(" %[^\n]", name2);
        int found2=0;
        for( i=0;i<num_books;i++)
        {
            if (strcmp( name2,library[i].name)==0)
            {
                printf("%s\n",library[i].author);
                printf("%s\n",library[i].name);
                found2=1;
                break;
            }
        }
        if(!found2)
            {
                printf("Book not found!");
            }
        break;
        case 2 :
        if(num_books<5)
        {
        printf("Enter name of book : \n");
        scanf(" %[^\n]", library[num_books].name);
        printf("Enter author name : \n");
        scanf(" %[^\n]", library[num_books].author);
        num_books++;
        }
        else
        {
            printf("Library is full. Sorry!\n");
        }
        break;
        case 3 : 
        char name[20];
        printf("Enter author name : \n");
        scanf(" %[^\n]", name);
        int found1 = 0;
        for(i=0;i<num_books;i++)
        {
                if(strcmp(name,library[i].author)==0)
        {
            printf("%s\n",library[i].author);
            printf("%s\n",library[i].name);
            found1=1;
            break;
        }
        }
                if(!found1)
        {
            printf("Author not found!\n");
        }
        break;
        case 4 : 
        char title[20];
        printf("Enter title of book : \n");
        fgets(title,sizeof(title),stdin);
            int counter=0;
            for(i=0;i<num_books;i++)
            {
                if(strcmp(title,library[i].name)==0)
        {
            counter++;
            printf("%d books found of this title!\n",counter);
        }
        else
        {
            printf("No books found of this title!\n");
        }
        }
        break;
        case 5 :
        printf("%d are the total number of books present in the library currently!",num_books);
        break;
        case 6 :
        char name1[25];
        char author[20];
        printf("Enter title of book : \n");
        scanf(" %[^\n]", name1);
        printf("Enter author name : \n");
        scanf(" %[^\n]", author);
        int found3=0;
        for(i=0;i<num_books;i++)
        {
            if(strcmp(name1,library[i].name)==0 && strcmp(author,library[i].author)==0)
        {
            printf("Book issued!\n");
            num_books--;
            printf("%d books remaining",num_books);
            found3=1;
        }
        }
        if(!found3)
        {
            printf("Book not found!\n");
        }
        break;
        case 7 :
        return 0;
        break;
        default :
        printf("Wrong choice entered! Try again!\n");
        break;
    }
    return 0;
}
