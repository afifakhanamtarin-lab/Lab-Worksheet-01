#include <stdio.h>
int main() { int expense, total = 0; int i;
for (i = 1; i <= 7; i++) {
    scanf("%d", &expense);
    total = total + expense;
}

printf("Total weekly expense: %d", total);

return 0;
}