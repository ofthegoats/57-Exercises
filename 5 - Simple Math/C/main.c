#include<stdio.h>

int main(void){
    float n1;
    float n2;

    printf("What is the first number? ");
    scanf("%f", &n1);

    printf("What is the second number? ");
    scanf("%f", &n2);

    printf("%f + %f = %f\n", n1, n2, n1+n2);
    printf("%f - %f = %f\n", n1, n2, n1-n2);
    printf("%f * %f = %f\n", n1, n2, n1*n2);
    printf("%f / %f = %f\n", n1, n2, n1/n2);

    return 0;
}