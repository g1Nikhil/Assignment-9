#include<stdio.h>

int main()
{
    int choice;
    int number;

    printf("1. positive to negative ");
    printf("\n2. negative to positive");
    
    printf("\nenter your choice = ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Enter the number");
        scanf("%d",&number);
        
        number = number *(-1);
        printf("the negative number is= %d",number);
        break;

    case 2:
         printf("Enter the number");
         scanf("%d",&number);

        number = number *(-1);
        printf("the positive number is= %d",number);    
        break;
    default:
        break;
    }

return 0;
}