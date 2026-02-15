#include <stdio.h>
int main(){
    char s1[101];
    char s2[101];
    fgets(s1,101,stdin);
    char *p=s1;
    char *q=s2;
    while(*p){
        *q=*p;
        p++;
        q++;
    }
    *q='\0';
    printf("%s",s2);
}
