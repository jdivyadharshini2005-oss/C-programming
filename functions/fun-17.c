#include <stdio.h>
int strong(int n) {
    int temp=n;
    int m,sum=0;
    while(temp>0) {
        m=temp%10;
        temp=temp/10;
        sum=sum+(m*m*m);
    }
    if (sum==n) {
        printf("amstrong number");
    }
    else {
        printf("not an amstrong number");
    }
}
int main() {
    int n;
    scanf("%d",&n);
    strong(n);
    return 0;
}