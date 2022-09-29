#include<stdio.h>

int main()
{
    int user;
    printf("Day = ");
    scanf("%d",&user);

    if(user <=7)
    {
    switch (user)
    {
    case 1:
        printf("Monday =  Associated with the Moon ");
        break;

    case 2:
        printf("Tuesday =  Associated with Mars ");
        break;

    case 3:
        printf("Wednesday =  God odin");
        break;

    case 4:
        printf("Thursday =  Germanic God");
        break;

    case 5:
        printf("Friday = Associated with Venus ");
        break;

    case 6:
        printf("Saturday = Associated with Saturn");
        break;

    case 7:
        printf("Sunday = The Sun");
        break;                

    default:
        break;
    }
    }

    else
    printf("Sorry there is no day");

    return 0;
}