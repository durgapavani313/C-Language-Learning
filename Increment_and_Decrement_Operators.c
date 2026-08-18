#include<stdio.h>

int main()
{
    printf("       Increment and Decrement Operators       \n\n");
    
    int a;
    
    printf("Enter a value: ");
    scanf("%d",&a);
    printf("\n");
    
    printf("Performing Post Increment on a (%d)\n",a);
    a++;
    printf("Value of a after performing Post Increment is %d\n",a);
    printf("\n");
    
    printf("Performing Pre Increment on a (%d)\n",a);
    ++a;
    printf("Value of a after performing Pre Increment is %d\n",a);
    printf("\n");
    
    printf("Performing Post Decrement on a (%d)\n",a);
    a--;
    printf("Value of a after performing Post Decrement  is %d\n",a);
    printf("\n");
    
    printf("Performing Pre Decrement on a (%d)\n",a);
    --a;
    printf("Value of a after performing Pre Decrement  is %d\n",a);
    
}