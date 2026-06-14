#include<stdio.h>

// Funtion prototype - Yeh 1 return karega agar prime hoga, warna 0
int isPrime(int n);

int main(){
    int num;
    printf("Enter a number to check Prime: ");
    scanf("%d", &num);

    // Function call aur check 
    if(isPrime(num)) {
        printf("%d is a Prime number.\n", num);
    } else {
        printf("%d is not a Prime number.\n", num);
    }
    return 0;
}

// Function definition
int isPrime(int n) {
    if(n <= 1) {
        return 0; // 1 ya usse chhote numbers prime nahi hote
    }

    // 2 se lekar n/2 tak divide karke check karenge
    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            return 0; // Agar divide ho gaya toh prime nahi hai (o return)
        }
    }
    return 1; // Agar kisi se divide ho gaya toh prime hai (1 return)
}