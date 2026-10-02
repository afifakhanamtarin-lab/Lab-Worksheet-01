#include <stdio.h>
int main() { int burger, pizza, juice; int total;
printf("Enter Burger quantity: ");
scanf("%d", &burger);

printf("Enter Pizza quantity: ");
scanf("%d", &pizza);

printf("Enter Juice quantity: ");
scanf("%d", &juice);

total = (burger * 250) + (pizza * 500) + (juice * 100);

printf("Total Bill: %d", total);

return 0;
}