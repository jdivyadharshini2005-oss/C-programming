#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    int count = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        int isPalindrome = 1;
        for (int j = 0; j < c ; j++) {
            if (arr[i][j] != arr[i][c - j - 1]) {
                isPalindrome = 0;
                break;
            }
        }
        if (isPalindrome) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}


