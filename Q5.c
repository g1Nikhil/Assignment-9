#include<stdio.h>

int main()
{
    int user;

    printf("Enetr variable = ");
    scanf("%d",&user);

    
        switch (user)
        {
        case 1:
        printf("Good");
            break;
        
        case 2:
        printf("better");
           break;

        case 3:
        printf("best");
          break;

        default:
        printf("invalid");
            break;
        }
        return 0;
}