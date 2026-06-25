#include<stdio.h>
#include<string.h>
int main() {
    char ch[100];
    scanf("%s",ch);
    int count=0;
    for(int i=0;ch[i]!='\0';i++) {
        if (ch[i]>='0' && ch[i]<='9') {
            count++;
        }
    }
    printf("%d",count);
}
