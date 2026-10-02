#include <stdio.h>
int main() { int age;
printf("Enter age: ");
scanf("%d", &age);

if (age < 12) {
    printf("Ticket Price: 100 taka");
} else if (age <= 25) {
    printf("Ticket Price: 150 taka");
} else {
    printf("Ticket Price: 250 taka");
}

return 0;
}
