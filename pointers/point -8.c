#include<stdio.h>
int main(){
    char a[100],b[50];
    scanf("%s%s",a,b);
    char *p=a;
    while(*p) p++;
    char *q=b;
    while(*q){
        *p=*q;
        p++;
        q++;
    }
    *p='\0';
    printf("%s",a);
}
