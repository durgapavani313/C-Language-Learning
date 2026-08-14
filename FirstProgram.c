#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a value: ");
    scanf("%d",&a);
    printf("Enter b value: ");
    scanf("%d",&b);
    
    //int c=a+b;
    
    printf("Addition of %d and %d is: ",a,b);
    printf("%d",a+b);
    return 0;
}