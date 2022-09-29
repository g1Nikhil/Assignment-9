#include<stdio.h>

int main()
{
    int number;

    printf("enter the number = ");
    scanf("%d",&number);

    switch (number%2==0)
    {
    case 1:
       number = number + 1;
       printf("your nearest odd number = %d ",number);
        break;

    case 0:
    number = number + 2;
       printf("your nearest odd number = %d ",number);
       break;    
    
    default:
       printf("\n thankyou");
        break;
    }
    return 0;
}