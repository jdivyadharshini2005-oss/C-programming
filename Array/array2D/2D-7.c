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
    int count=0;
    for (int i = 0; i < r; i++) {
        int min = arr[i][0];
        for (int j = 1; j < c; j++) {
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    for (int j = 0; j < c; j++) {
        int max = arr[0][j];
        for (int i = 1; i < r; i++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
        if (min == max) {
            count++;
        }
    }
    }
   printf("%d\n", count);
    return 0;
}

