#include<stdio.h>
#include<string.h>
int main() {
    char s[100];
    char ch;
    int index = -1;
    scanf("%s", s);
    scanf(" %c", &ch);
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] == ch) {
            index = i;
            break;
        }
    }
    printf("%d", index);
    return 0;
}
