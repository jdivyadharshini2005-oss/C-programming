#include <stdio.h>
int main() {
    int r,c;
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int index=0;
    int max=0;
    for(int i=0;i<r;i++) {
        int product=1;
        for(int j=0;j<c;j++) {
            product=product*arr[i][j];
        }
        if (product>max) {
            max=product;
            index=i;
        }

    }
    printf("%d ",index);
}