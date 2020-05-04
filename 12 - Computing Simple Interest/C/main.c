#include<stdio.h>

int main(void){
    float P;
    double r;
    int t;

    printf("Enter the principal: £");
    scanf("%f", &P);
    printf("Enter the rate: ");
    scanf("%lf", &r);
    printf("Enter the number of years: ");
    scanf("%d", &t);

    printf("After %d years at %.2f%%, the investment will be worth £%.2f.\n", t, r, P * (1+((r/100)*t)));

    return 0;
}