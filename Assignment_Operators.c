#include <stdio.h>

int main() {
    int a,b;
   
    printf("       Assignment Operators       \n\n");

    printf("Enter a value: ");
    scanf("%d", &a);
    printf("Enter b value: ");
    scanf("%d", &b);
    printf("\n");
    
    printf("a = %d, b = %d\n", a, b);
    printf("a += b then a = %d\n\n", a += b);

    printf("a = %d, b = %d\n", a, b);
    printf("a -= b then a = %d\n\n", a -= b);

    printf("a = %d, b = %d\n", a, b);
    printf("a *= b then a = %d\n\n", a *= b);

    printf("a = %d, b = %d\n", a, b);
    printf("a /= b then a = %d\n\n", a /= b);

    printf("a = %d, b = %d\n", a, b);
    printf("a %= b then a = %d\n\n", a %= b);
}
