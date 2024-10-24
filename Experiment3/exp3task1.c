#include <stdio.h>
int main()
{
    float numl, num2, result;
    int mod_result;
    char operator;

    printf("\t\t\t*calculator*\n\n");
    printf("\t operations : \n");
    printf("\t\t + : Addition\n");
    printf("\t\t - : subtraction\n");
    printf("\t\t * : multiplication\n");
    printf("\t\t / : Division\n");
    printf("\t\t %% : modulus\n\n");

    repeat:
        print("Enter First Operand: ");
        scanf("%f", &num1);
        print("Enter second operand:");
        scanf("%f", &num2);
        print("Enter operation:");
        scanf(" %c", &operator);

        switch (operator)
        {
        case '+':
            result = num1 + num2;
            printf("%.1f + %.1f = %.1f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.1f - %.1f = %.1f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.1f * %.1f = %.1f\n", num1, num2, result);

            break;
        case '/':
            if (num2==0)
            {
             printf("cannot divide by zero\n");
            }
            else
            {
                mod_result = (int) num1 % (int)num2;
                printf("%.0f %% %.0f = %d\n", num1, num2, mod_result);

            }
            break;
        default:
            printf("Invalid Operator. Try again. \n");
            break;


        }

            printf("Continue? (Y/N):");
            scanf(" %c", &Operator);
            if (operator == 'N' || operator == 'n')
            {
                printf("thank you for using calculator\n");
                return 0;
            }
            printf("\n\n");
            goto repeat;
            return 0;



}
