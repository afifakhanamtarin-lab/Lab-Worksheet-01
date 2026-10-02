#include <stdio.h>
int main() { int start, end, i, count = 0;
printf("Enter starting number: ");
scanf("%d", &start);

printf("Enter ending number: ");
scanf("%d", &end);

printf("Numbers: ");

for (i = start; i <= end; i++) {
    printf("%d ", i);
    count++;
}

printf("\nCount: %d", count);

return 0;
}