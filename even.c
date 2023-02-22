#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter two Number : ");
    scanf("%d%d", &x, &y);

    char op;
    printf("Enter the Operator : ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("Addition: %d \n", x + y);
        break;

    case '-':
        printf("Subtraction: %d \n", x - y);
        break;

    case '*':
        printf("Product: %d \n", x * y);
        break;

    case '/':
        printf("Division: %d \n", x / y);
        break;

    default:
        printf("ERROR: Invalid Operation, Please try again\n");
        break;
    }

    return 0;
}