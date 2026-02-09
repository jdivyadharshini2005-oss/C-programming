#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = 0;
    int maxCol = 0;
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) {
            sum += arr[i][j];
        }
        if (sum > max) {
            max = sum;
            maxCol = j;
        }
    }
    printf("%d", maxCol);
    return 0;
}
