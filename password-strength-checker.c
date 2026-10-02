#include <stdio.h>
int main() { int length;
printf("Enter password length: ");
scanf("%d", &length);

if (length < 6) {
    printf("Weak password");
} else if (length <= 10) {
    printf("Medium password");
} else {
    printf("Strong password");
}

return 0;
}