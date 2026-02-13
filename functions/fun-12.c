#include <stdio.h>
int leapyear(int year) {
    if (year % 4 == 0 && year % 400 == 0 || year % 100 != 0) {
        printf("leapyear");
    }
    else {
        printf("not leapyear");
    }
}
int main() {
    int year;
    scanf("%d", &year);
    leapyear(year);
    return 0;
}