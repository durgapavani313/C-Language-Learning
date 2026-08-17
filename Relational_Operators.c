#include <stdio.h>

int main()
{
    int a,b;
    
    printf("       Relational Operators       \n\n");

    printf("Enter a value: ");
    scanf("%d",&a);
    printf("Enter b value: ");
    scanf("%d",&b);

    printf("\n");

    printf("%d < %d is %d\n",a,b,a < b);
    printf("%d > %d is %d\n",a,b,a > b);
    printf("%d <= %d is %d\n",a,b,a <= b);
    printf("%d >= %d is %d\n",a,b,a >= b);
    printf("%d != %d is %d\n",a,b,a != b);
    printf("%d == %d is %d\n",a,b,a == b);
}