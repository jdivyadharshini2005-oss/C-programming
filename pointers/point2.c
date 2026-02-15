#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    int *p=arr;
    int max=0;
    for(int i=0;i<size;i++) {
        if(*p>max || *p<max) {
            max=*p;
        }
        *p++;
    }
    printf("%d",max);
    return 0;
}
