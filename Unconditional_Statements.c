#include<stdio.h>
int main()
{
    printf("       Unconditional Statements       \n\n");
    int i;
    
    // 1. break 
    printf("BREAK example:\n");
    for(i = 1;i <= 5;i++)
    {
       if(i==3)
       {
        break;
       }
       printf("%d\n",i);
    }
    printf("\n\n");

    // 2. continue
    printf("CONTINUE example:\n");
    for(i = 1;i <= 5;i++)
    {
       if(i==3)
       {
        continue;
       }
       printf("%d\n",i);
    }
    printf("\n\n");

    // 3. goto
    printf("GOTO example:\n");
    printf("1\n");
    goto jump;
    printf("2\n");
    jump:
    printf("3\n");

    printf("\n\n");

    // 4. return
    printf("RETURN example:\n");
    printf("Program is ending\n");
    return 0;
 
}