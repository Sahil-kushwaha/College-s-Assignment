#include <stdio.h>

int main()
{
    int x = 5, y = 10, z, temp;
    int choice;
    int result = 0;
    printf("which operator would you like use\n");
    printf("For Binary operator Enter \"B\"\n");
    printf("For unary operator Enter \"U\"\n");
    printf("For Ternary operator Enter \"T\"\n");
    char operatorType;
    scanf("%c", &operatorType);
    switch (operatorType)
    {
        // binary operator
    case 'B':
        printf("For + operation Enter 1\n");
        printf("For - operation Enter 2\n");
        printf("For * operation Enter 3\n");
        printf("For / operation Enter 4\n");
        printf("For & operation Enter 5\n");
        printf("For | operation Enter 6\n");
        printf("For >> operation Enter 7\n");
        printf("For << operation Enter 8\n");
        printf("For ^ operation Enter 9\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            result = x + y;
            printf("%d + %d = %d\n", x, y, result);
            break;
        case 2:
            result = x - y;
            printf("%d - %d = %d\n", x, y, result);
            break;
        case 3:
            result = x * y;
            printf("%d * %d = %d\n", x, y, result);
            break;
        case 4:
            result = (x / y);
            printf("%f / %f = %f\n", x, y, (float)result);
            break;
        case 5:
            result = (x & y);
            printf("%d & %d = %d\n", x, y, result);
            break;
        case 6:
            result = (x | y);
            printf("%d | %d = %d\n", x, y, result);
            break;
        case 7:
            result = (x >> 1);
            printf("%d >> 1 = %d\n", x, result);
            break;
        case 8:
            result = (x << y);
            printf("%d << 1 = %d\n", x, result);
            break;
        case 9:
            result = (x ^ y);
            printf("%d ^ %d = %d\n", x, y, result);
            break;

        default:
            printf("Invalid operation\n");
            break;
        }
        break;
        // Unary operators
    case 'U':
        printf("For pre increment ++a operation Enter 1\n ");
        printf("For post increment a++ operation Enter 2\n ");
        printf("For pre decrement --a operation Enter 3\n ");
        printf("For post decrementa a-- operation Enter 4\n ");
        printf("For ! operation Enter 5\n ");
        printf("For ~ operation Enter 6\n ");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            temp = x;
            (++x);
            printf("++%d = %d\n", temp, x);
            break;
        case 2:
            temp = x;
            (x++);
            printf("%d++ = %d\n", temp, x);
            break;
        case 3:
            temp = x;
            (--x);
            printf("--%d = %d\n", temp, x);
            break;
        case 4:
            temp = x;
            (x--);
            printf("%d-- = %d\n", temp, x);
            break;
        case 5:
            result = (!x);
            printf("!%d = %d\n", x, result);
            break;
        case 6:
            result = (~x);
            printf("~%d = %d\n", x, result);
            break;

        default:
            printf("Invalid operation\n");
            break;
        }
        break;

    case 'T':
        // Ternary operator
        printf("The Ternary operator is ?:\n");
        printf("To check whether number is even or odd\n");
        printf("Now apply ternary operator\n");
        printf("Enter the Number\n");
        scanf("%d", &z);

        int ch = (z % 2 == 0) ? 1 : 0;
        switch (ch)
        {
        case 1:
            printf("%d is even number", x);
            break;

        case 0:
            printf("%d is odd number", x);
            break;
        }
        break;

    default:
        printf("Invalid Operator");
        break;
    }

    return 0;
}