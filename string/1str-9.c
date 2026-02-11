
              //count uppercase and lowercase
// #include<stdio.h>
// #include<string.h>
// int main() {
//     char ch[100];
//     fgets(ch,sizeof(ch),stdin);
//     int upper=0;
//     int lower=0;
//     for(int i=0;ch[i]!='\0';i++) {
//         if(ch[i]>='a' && ch[i]<='z') {
//             lower++;
//         }
//         else if(ch[i]>='A' && ch[i]<='Z') {
//             upper++;
//         }
//     }
//     printf("lower:%d\n",lower);
//     printf("upper:%d",upper);
//
// }


                //convert lowercase to uppercase
#include<stdio.h>
#include<string.h>
int main() {
    char ch[100];
    int len=0,asci;
    scanf("%s",ch);
    len=strlen(ch);
    for (int i=0;i<len;i++) {
        asci=ch[i]-32;
        printf("%c",asci);
    }
    return 0;
}