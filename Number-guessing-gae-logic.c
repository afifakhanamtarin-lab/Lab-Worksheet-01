#include <stdio.h>
int main() { int guess; int secret = 25;
do {
    scanf("%d", &guess);

    if (guess < secret) {
        printf("Too low\n");
    } else if (guess > secret) {
        printf("Too high\n");
    } else {
        printf("Correct guess!\n");
    }

} while (guess != secret);

return 0;
}