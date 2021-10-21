#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    float n1,n2;

    printf("\n Enter an choice : \n\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Exit \n\n ");
    scanf("%d", &choice);
    printf("\n Enter two operands: \n");
    scanf("%f %f", &n1, &n2);

    switch (choice)
    {
        case 1: printf("\n %f + %f ->  %f", n1, n2, n1+ n2);
            break;
        case 2: printf("\n %f - %f ->  %f", n1, n2, n1 - n2);
            break;
        case 3: printf("\n %f * %f ->  %f", n1, n2, n1 * n2);
            break;
        case 4: printf("\n %f / %f ->  %f", n1, n2, n1 / n2);
            break;
        case 5:
            break;
        default: printf("\n Error! choice is not correct");
    }
    return 0;
}
