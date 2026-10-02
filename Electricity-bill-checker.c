#include <stdio.h>
int main() { int units, bill;
printf("Enter consumed units: ");
scanf("%d", &units);

if (units <= 100) {
    bill = units * 5;
} else {
    bill = units * 8;
}

printf("Electricity Bill: %d taka", bill);

return 0;
}