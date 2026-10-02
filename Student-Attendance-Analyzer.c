#include <stdio.h>
int main() { int totalClasses, attendedClasses; float attendance;
printf("Enter total classes: ");
scanf("%d", &totalClasses);

printf("Enter attended classes: ");
scanf("%d", &attendedClasses);

attendance = ((float)attendedClasses / totalClasses) * 100;

printf("Attendance: %.2f%%\n", attendance);

if (attendance < 75) {
    printf("Not eligible for exam");
} else {
    printf("Eligible for exam");
}

return 0;
}