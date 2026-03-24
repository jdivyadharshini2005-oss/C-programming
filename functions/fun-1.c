#include<stdio.h>
float mul(float p, float r,float t) {
    float k=(p*r*t)/100;
    return k;
}
int main() {
    float p,r,t;
    scanf("%f%f%f",&p,&r,&t);
    printf("%.2f",mul(p,r,t));

}
