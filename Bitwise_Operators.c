#include <stdio.h>

int main()
{
    printf("       Bitwise Operators       \n\n");

    int a,b;

    printf("Enter a value: ");
    scanf("%d",&a);
    printf("Enter b value: ");
    scanf("%d",&b);
    printf("\n");

    printf("%d & %d is %d\n",a, b, a & b);
    printf("%d | %d is %d\n",a, b, a | b);
    printf("%d ^ %d is %d\n",a, b, a ^ b);
    printf("~%d is %d\n",a,~a);
    printf("%d << 1 is %d\n",a,a << 1);
    printf("%d >> 1 is %d\n",a,a >> 1);

    return 0;
}