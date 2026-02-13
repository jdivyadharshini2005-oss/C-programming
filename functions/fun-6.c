#include<stdio.h>
int fact(int n) {
    int fact=1;
    for (int i = n; i>0 ; i--) {
        fact=fact*i;
    }
    return fact;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;

}
