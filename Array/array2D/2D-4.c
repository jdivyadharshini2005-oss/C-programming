#include<stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            for (int k = 0; k < i; k++) {
                if (arr[i][j] == arr[k][j]) {
                    printf("%d ", arr[i][j]);
                }
            }
        }
    }
    return 0;
}
