#include <stdio.h>
int palindrome(int n) {
    int rev=0;
    int temp=n;
    while (temp > 0) {
        rev = rev * 10 + temp %10;
        temp = temp / 10;
    }
    if (rev == n)
        printf("palindrome");
    else
        printf("not palindrome");
}
int main() {
    int n;
    scanf("%d", &n);
    palindrome(n);
    return 0;

}