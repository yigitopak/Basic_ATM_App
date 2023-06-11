#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    int depositAmount;
    int withdrawAmount;
    int balance = 1000;

    while (choice)
    {
        printf("1- Account Balance\n");
        printf("2- Deposit Money\n");
        printf("3- Withdraw Money\n");
        printf("0- Exit\n");
        printf("Please make a choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            break;
        case 1:
            printf("Your balance: %d\n", balance);
            break;
        case 2:
            printf("Please enter the amount to deposit: \n");
            scanf("%d", &depositAmount);
            printf("Deposit successful.\n");
            balance += depositAmount;
            printf("Your updated balance: %d\n", balance);
            break;
        case 3:
            printf("Please enter the amount to withdraw: \n");
            scanf("%d", &withdrawAmount);
            if (withdrawAmount > balance)
            {
                printf("You entered an amount higher than your balance!\n");
            }
            else
            {
                printf("Withdrawal successful.\n");
                balance -= withdrawAmount;
                printf("Your updated balance: %d\n", balance);
            }
            break;
        default:
            printf("You made an incorrect choice!\n");
            break;
        }
    }

    return 0;
}
