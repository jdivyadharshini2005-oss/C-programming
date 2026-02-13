#include <stdio.h>
int count(int n) {
    int count = 0;
    int temp=n;
    while (temp >0) {
        temp=temp/10;
        count++;
    }
    return count;
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", count(n));
    return 0;
}