#include<stdio.h>

int main()
{
    int a,b,c,Disciminant;
    printf("enter the value of a b c = ");
    scanf("%d %d %d",&a,&b,&b);

    Disciminant = (b*b)-4*a*c;

    switch (Disciminant > 0)
    {
    case 1:
        printf("the equation has two real and distinct roots");
        break;
    case 0:
        printf("the equation has two complex roots");
        break ;
    default:
        break;
    }

    return 0;
}