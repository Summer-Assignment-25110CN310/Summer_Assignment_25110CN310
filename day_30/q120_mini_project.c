#include <stdio.h>
#include <string.h>

struct Item {
    int code;
    char itemName[50];
    float itemPrice;
};

// Functions prototype structure
void printHeader();
void displayItems(struct Item list[], int size);

int main() {
    struct Item catalog[3] = {
        {501, "Gaming Mouse", 1250.0},
        {502, "Mechanical Keyboard", 3500.0},
        {503, "LED Monitor", 9500.0}
    };
    int codeChoice, quantity;

    printHeader();
    displayItems(catalog, 3);

    printf("\nBilling ke liye Product Code enter karein: ");
    scanf("%d", &codeChoice);
    printf("Quantity batayein: ");
    scanf("%d", &quantity);

    int valid = 0;
    for (int i = 0; i < 3; i++) {
        if (catalog[i].code == codeChoice) {
            float totalBill = catalog[i].itemPrice * quantity;
            printf("\n====================================\n");
            printf("            FINAL INVOICE           \n");
            printf("====================================\n");
            printf("Item Name: %s\n", catalog[i].itemName);
            printf("Quantity : %d\n", quantity);
            printf("Total Payable Amount: %.2f INR\n", totalBill);
            printf("====================================\n");
            valid = 1;
            break;
        }
    }

    if (!valid) {
        printf("\nError: Galat product code entered!\n");
    }

    printf("\n🎉 Mini Project execution completed successfully!\n");
    return 0;
}

void printHeader() {
    printf("==================================================\n");
    printf("       WELCOME TO THE MINI POINT-OF-SALE SYSTEM   \n");
    printf("==================================================\n");
}

void displayItems(struct Item list[], int size) {
    printf("\n%-10s %-25s %-15s\n", "Code", "Product Description", "Price (INR)");
    printf("--------------------------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("%-10d %-25s %-15.2f\n", list[i].code, list[i].itemName, list[i].itemPrice);
    }
}