#include<stdio.h>
int main(){
    char s[200];
    fgets(s,200,stdin);
    int count=1;
    char *p=s;
    while(*p){
        if(*p==' ') {
            count++;
        }
        p++;
    }
    printf("%d",count);
}
