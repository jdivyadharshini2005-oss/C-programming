// #include<stdio.h>
// #include<string.h>
// int main () {
//     char str[50];
//     int len,palindrome=0;
//     fgets(str,sizeof(str),stdin);
//     len=0;
//     while(str[len]!='\0') {
//         len++;
//     }
//
//     for (int i=0; i<len/2; i++) {
//         if (str[i]!=str[len-i-1]) {
//             palindrome=1;
//             break;
//
//         }
//     }
//         if (palindrome) {
//             printf("palindrome");
//         }
//         else {
//             printf("not palindrome");
//         }
//     return 0;
//     }


#include<stdio.h>
#include<string.h>
int main() {
    char str[50];
    char temp[50];
    scanf("%s",str);
    strcpy(temp,str);
    printf("%s\n",temp);
    strrev(str);
    printf("%s\n",str);
    if (strcmp(temp,str)==0) {
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}
