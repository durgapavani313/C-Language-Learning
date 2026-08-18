#include<stdio.h>

int main()
{
    printf("       Logical Operators       \n\n");
    
    int a,b;
    
    printf("Enter a value: ");
    scanf("%d",&a);

    printf("Enter b value: ");
    scanf("%d",&b);
    printf("\n");
    
    printf("%d && %d = %d\n",a, b, a && b);
    printf("%d || %d = %d\n",a, b, a || b);
    printf("!%d = %d,!%d = %d",a,!a,b,!b);

}

