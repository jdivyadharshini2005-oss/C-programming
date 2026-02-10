#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int valid = 0;
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            valid = 1;
            break;
              }
    }
    if (valid) {
        printf("valid\n");
    }
    else {
        printf("invalid\n");
    }

    return 0;
}
