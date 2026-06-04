#include <stdio.h>

int main() {
    int n1, n2, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    //Loop 1 se chalega aur jo dono numbers ko divide karega usko gcd bana dega
    for (int i = 1; i <= n1 && i <= n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            gcd = i; //Sabse bada common divisor end mein save rahega
        }
    }

    printf("GCD of %d and %d is %d\n", n1, n2, gcd);
    return 0;
}
