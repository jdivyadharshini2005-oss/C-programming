#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i=0;
        while(str[i] !='@' && str[i] !='\0') {
            printf("%c",str[i]);
            i++;
        }
    return 0;
    }