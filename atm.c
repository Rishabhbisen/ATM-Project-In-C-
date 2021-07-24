#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;
    char ch;

    printf("***Hello, welcome to you in our atm****\n");
    printf("Enter Initial value__\n");
    scanf("%d", &x);
    printf("Enter____\n C for credit____\n D for debit___\n B for balance___\n");
    scanf("\n%c", &ch);
    switch (ch)
    {
    case 'c':
        printf("Enter credit amount___\n");
        scanf("%d", &y);

        x = x + y;
        printf("New amount is = %d", x);

        break;
    case 'd':
        printf("Enter debit amount\n");
        scanf("%d", &y);
        x = x - y;
        if (x >= y)
        {
            x = x - y;
            printf("New amount is = %d", x);
        }
        else
        {
            printf("Insuficiant balance\n");
        }
        break;
    case 'b':
        printf(" Your total balance is = %d", x);
        break;

    default:
        printf("You entered wrong character\n");
        break;
    }
    return 0;
}
