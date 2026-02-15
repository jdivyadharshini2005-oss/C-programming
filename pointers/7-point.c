#include<stdio.h>
int main(){
    char s[50];
    scanf("%s",s);
    char *a=s;
    char *b=s;
    while(*b) b++;
    b--;
    while(a<b){
        if(*a!=*b){
            printf("not palindrome");
            return 0;
        }
        a++;
        b--;
    }
    printf("palindrome");
}

