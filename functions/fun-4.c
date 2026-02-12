#include<stdio.h>
float area(float b) {
    float a=3.14*b*b;
    return a;

}
int main() {
    float r;
    scanf("%f",&r);
    printf("%.2f",area(r));
    return 0;

}