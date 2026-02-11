#include<stdio.h>
#include<string.h>
int main() {
    char ch[50];
    scanf("%s",ch);
    int len=0,asci;
    len=strlen(ch);
    for (int i=0;i<len;i++) {
        asci=ch[i]+32;
        printf("%c",asci);
    }
}