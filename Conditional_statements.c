#include<stdio.h>

int main()
{
    printf("       Conditional Statements       \n\n");
    
    int marks,day;

    printf("Enter  your marks: ");
    scanf("%d",&marks);

    // 1. if statement
    if(marks == 100)
    {
        printf("You got full marks\n");
    }
    
    // 2. if-else statement
    if(marks >= 40)
    {
        printf("You are Pass\n");
    }
    else
    {
        printf("You are Fail\n");
    }

    // 3. else if ladder
    if (marks >= 90)
    {
        printf("Grade A\n");
    }
    else if (marks >= 75)
    {
         printf("Grade B\n");
    }
     else if (marks >= 60)
    {
         printf("Grade C\n");
    }
     else if (marks >= 40)
    {
         printf("Grade D\n");
    }
    else
    {
         printf("Grade F\n");
    }
    // 4. Nested if
    if (marks >= 40)
    {
        if (marks >= 75)
        {
            printf("You passed with Distinction\n");
        }
        else
        {
            printf("You passed normally\n");
        }
 
    }
    else
    {
         printf("You need to improve\n");
    }

    // 5. Switch Statement
    printf("Enter a day number(1-3): ");
    scanf("%d",&day);

    switch (day)
    {
        case 1:
             printf("Monday\n");
             break;
         case 2:
             printf("Tuesday\n");
             break;
        case 3:
             printf("Wednesday\n");
             break;
        default:
            printf("Invalid day\n");
    }
    return 0;
    
}