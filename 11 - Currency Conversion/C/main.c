#include<stdio.h>

int main(void){
    float nEUR, rate;

    printf("How many euros are you exchanging? €");
    scanf("%f", &nEUR);
    printf("What's the exchange rate? ");
    scanf("%f", &rate);

    printf("€%.2f at an exchange rate of %f is £%.2f\n", nEUR, rate, nEUR * rate);

    return 0;
}