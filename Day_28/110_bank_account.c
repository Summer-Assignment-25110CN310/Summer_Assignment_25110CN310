#include <stdio.h>

struct BankAccount {
    long long accNo;
    char holderName[50];
    float balance;
};

int main() {
    struct BankAccount user;

    printf("=== Create Bank Account System ===\n");
    printf("Enter Account Number: ");
    scanf("%lld", &user.accNo);
    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", user.holderName);
    printf("Enter Initial Opening Balance (INR): ");
    scanf("%f", &user.balance);

    // Formatted account passbook layout printing
    printf("\n================================================\n");
    printf("          NATIONAL DIGITAL BANK PASSBOOK        \n");
    printf("================================================\n");
    printf(" Account Number : %lld\n", user.accNo);
    printf(" Holder Name    : %s\n", user.holderName);
    printf(" Current Balance: %.2f INR\n", user.balance);
    printf(" Account Status : ACTIVE\n");
    printf("================================================\n");

    return 0;
}