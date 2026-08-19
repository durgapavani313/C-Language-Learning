#include<stdio.h>
int main()
{

    printf("Ternary Operator(Conditional Operator)\n\n"); 

    int x;
    printf("Enter x value; ");
    scanf("%d",&x);
    printf("%s",(x>=0)?"Positive":"Negative");
}