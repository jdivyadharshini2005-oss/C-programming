#include <math.h>
#include <stdio.h>
#include <math.h>
int power(int a, int b) {
    int result=pow(a, b);
    return result;

}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", power(a,b));
    return 0;
}