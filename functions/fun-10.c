#include <stdio.h>
int add(int n) {
    int sum=0;
    for (int i=1; i<=n; i++) {
        sum=sum+i;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", add(n));
}
