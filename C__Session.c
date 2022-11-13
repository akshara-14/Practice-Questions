#include <stdio.h>

int main()
{
    // int n;

    // for(int i = 1; i <= 5; i++){
    //     scanf("%d", &n);
    //     if(n < 0){
    //         printf("Continue!\n");
    //         goto negative_number;
    //     }
    //     printf("The number at index %d is %d\n", i, n);
    // }

    // printf("Loop ends here");

    // negative_number:
    // printf("Goto");

    switch ('A')
    {
    case 'R':
        printf("Case 1\n");
        break;

    case 'S':
        printf("Case 2\n");
        break;

    case 'T':
        printf("Case 3\n");
        break;

    case 'A':
        printf("Case A\n");
        break;

    default:
        printf("Default case\n");
        break;
    }

    // char operator;
    // int a, b;
    // printf("Enter an operator: ");
    // scanf("%c", &operator);
    // printf("Enter two operands: ");
    // scanf("%d %d", &a, &b);

    // switch(operator)
    // {
    //     case '+':
    //     printf("%d + %d = %d", a, b, a+b);
    //     break;

    //     case '-':
    //     printf("%d - %d = %d", a, b, a-b);
    //     break;

    //     case '/':
    //     printf("%d / %d = %d", a, b, a/b);
    //     break;

    //     case '*':
    //     printf("%d * %d = %d", a, b, a*b);
    //     break;

    //     default:
    //     printf("Invalid input");
    //     break;

    // }

    return 0;
}