#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int arr[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int minIndex = 0;
    int minAvg = 0;
    int temp;
    for (int i = 0; i < R; i++) {
        int sum = 0;
        for (int j = 0; j < C; j++) {
            sum += arr[i][j];
            temp=arr[i][j];
        }
        int avg = sum / temp;
        if (avg < minAvg) {
            minAvg = avg;
            minIndex = i;
        }
    }
    printf("%d", minIndex);
    return 0;
}
