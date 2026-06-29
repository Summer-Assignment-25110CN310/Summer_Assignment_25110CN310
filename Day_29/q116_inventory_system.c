#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product inventory[10] = {
        {101, "Wireless Mouse", 15, 450.00},
        {102, "Mechanical Keyboard", 8, 1200.00}
    };
    int itemCount = 2, choice, searchId, found;

    while (1) {
        printf("\n=== INVENTORY MANAGEMENT SYSTEM ===\n");
        printf("1. View Stock Reports\n");
        printf("2. Restock/Update Quantity\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 3) break;

        switch (choice) {
            case 1:
                printf("\n%-6s %-25s %-10s %-12s %-12s\n", "ID", "Product Name", "Stock", "Price (INR)", "Total Value");
                printf("-------------------------------------------------------------------------\n");
                float grandTotal = 0;
                for (int i = 0; i < itemCount; i++) {
                    float totalVal = inventory[i].quantity * inventory[i].price;
                    grandTotal += totalVal;
                    printf("%-6d %-25s %-10d %-12.2f %-12.2f\n", 
                           inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price, totalVal);
                }
                printf("-------------------------------------------------------------------------\n");
                printf("Total Valuation of Warehouse Stock: %.2f INR\n", grandTotal);
                break;

            case 2:
                printf("Update karne ke liye Product ID enter karein: ");
                scanf("%d", &searchId);
                found = 0;
                for (int i = 0; i < itemCount; i++) {
                    if (inventory[i].id == searchId) {
                        int newQty;
                        printf("Current stock of '%s' is %d. Naya added quantity bataiye: ", inventory[i].name, inventory[i].quantity);
                        scanf("%d", &newQty);
                        inventory[i].quantity += newQty;
                        printf("Inventory record synchronized successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if (!found) printf("Error: Product ID verification failed.\n");
                break;

            default:
                printf("Invalid option input selection!\n");
        }
    }
    return 0;
}