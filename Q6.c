#include<stdio.h>

int main()
{
    int year,y;
    printf("Enter Year = ");
    scanf("%d",&year);

    y = year % 400 == 0 || year % 100 == 0 || year % 4==0;

    switch (y)
    {
    case 1:
        printf("\n %d is the leap year ",year);
        break;

    case 2:
    printf("\n %d is not a leap year ",year);    
    
    default:
    printf("\n is not the leap year",year);
        break;
    }
    return 0;
}