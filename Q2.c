#include<stdio.h>

int main()
{
    int a,b,user;
    printf("enter two numbers = ");
    scanf("%d %d",&a,&b);

    printf("MENU DRIVEN\n5");

    printf("1. Addition\n");
    printf("2. SUBSTRACTION\n");
    printf("3. MULTIPLICATION\n");
    printf("4. DIVISION\n");
    printf("5. MODULAR\n");

    printf("user =");
    scanf("%d",&user);

    if (user <=4)
    {

    switch (user)
    {
    case 1:
        printf("%d",a+b);
        break;
    
    case 2:
        printf("%d",a-b);
        break;
    
    case 3:
        printf("%d",a*b);
        break;
    
    case 4:
        printf("%d",a/b);
        break;

    default:
    printf("Sorry there is nothing");
        break;
    }
    }
    else
    printf("Sorry there is nothing");
    return 0;
}