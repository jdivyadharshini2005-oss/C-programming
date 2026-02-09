#include <stdio.h>
#include <stdlib.h>

int main() {
    int R, C;
    scanf("%d%d", &R, &C);
    int arr[R][C];
    int max_sum = INT_MIN;
    int min_sum = INT_MAX;
    for (int i=0;i<R;i++) {
        for (int j=0;j<C;j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < R; i++) {
        int sum = 0;
        for (int j = 0; j < C; j++) {
            sum += arr[i][j];
        }
        if (sum > max_sum) {
            max_sum = sum;
        }
        if (sum < min_sum) {
            min_sum = sum;
        }
    }

    printf("%d\n", max_sum - min_sum);
    return 0;
}
