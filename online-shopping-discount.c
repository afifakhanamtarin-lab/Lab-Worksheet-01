#include <stdio.h>
int main() { float amount, discount, finalAmount;
printf("Enter shopping amount: ");
scanf("%f", &amount);

if (amount > 5000) {
    discount = amount * 0.20;
} else if (amount > 2000) {
    discount = amount * 0.10;
} else {
    discount = 0;
}

finalAmount = amount - discount;

printf("Final Amount: %.0f", finalAmount);

return 0;
}