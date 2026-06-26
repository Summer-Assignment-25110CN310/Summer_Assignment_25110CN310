#include <stdio.h>

int main() {
    float balance = 5000.0; // Initial default balance
    int choice;
    float amount;

    while(1) {
        printf("\n======= ATM SIMULATION MENU =======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Your current balance is: %.2f INR\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if(amount > 0) {
                    balance += amount;
                    printf("%.2f INR deposited successfully!\n", amount);
                } else {
                    printf("Invalid amount!\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if(amount > balance) {
                    printf("Inadequate Balance! Transaction failed.\n");
                } else if(amount <= 0) {
                    printf("Invalid amount entry!\n");
                } else {
                    balance -= amount;
                    printf("%.2f INR withdrawn successfully!\n", amount);
                }
                break;
            case 4:
                printf("Thank you for using our ATM service. Take care!\n");
                return 0;
            default:
                printf("Invalid selection! Try again.\n");
        }
    }
    return 0;
}