#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    char ch[100];
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        ch[i]=str[i];
        printf("%c", ch[i]);
    }
}