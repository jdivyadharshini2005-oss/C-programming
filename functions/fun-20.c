 #include <stdio.h>
int add(int a, int b) {
     char choice;
     scanf(" %c", &choice);
    switch (choice) {
         case '-':
             printf("%d",a-b);
             break;
         case '*':
             printf("%d",a*b);
             break;
         case '/':
             printf("%d",a/b);
             break;
         case '+':
             printf("%d",a+b);
             break;
         default:
             printf("invalid choice");
     }
 }
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    add(a, b);
    return 0;
 }
