#include <stdio.h>
int main() { int glasses;
printf("Enter number of glasses: ");
scanf("%d", &glasses);

if (glasses < 8) {
    printf("Drink more water. Daily goal not completed.");
} else {
    printf("Daily goal completed.");
}

return 0;
}
