#include <stdio.h>

int main() 
{
    int a,b;

    printf("       ARITHMETIC OPERATORS       \n\n");
    
    printf("Enter a value: ");
    scanf("%d",&a);
    printf("Enter b value: ");
    scanf("%d",&b);

    printf("\n");
    printf("(Addition)         =>      %d + %d = %d \n", a , b , a + b);
    printf("(Subtraction)      =>      %d - %d = %d \n", a , b , a - b);
    printf("(Multiplication)   =>      %d * %d = %d \n", a , b , a * b);
    printf("(Division)         =>      %d / %d = %d \n", a , b , a / b);
    printf("(Modulo Division)  =>      %d %% %d = %d \n", a , b , a % b);
    
}