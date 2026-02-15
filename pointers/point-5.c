#include<stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int str1[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &str1[i]);
    }
    int *p=str1;
    int sum=0;
    for (int i = 0; i <size; i++) {
        sum=sum + *(p+i);
    }
    printf("%d", sum);
}