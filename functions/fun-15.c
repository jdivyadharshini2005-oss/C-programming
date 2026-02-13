#include <stdio.h>
int mul(int n) {
    for (int i=1; i<=10; i++) {
        printf("%d x %d = %d\n",n,i,i*n);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    mul(n);
    return 0;
}