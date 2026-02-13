#include <stdio.h>
int power(int a, int b) {
    for (int i=1; i<=b; i++) {
        sum=a*a;
    }
    return sum;
}
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", power(a,b));
    return 0;
}