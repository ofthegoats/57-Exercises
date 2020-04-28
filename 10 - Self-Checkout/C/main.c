#include<stdio.h>

int main(void){
    int ni;
    printf("What is the number of items? ");
    scanf("%d", &ni);
    float subtotal, price, number;
    for (int i = 1; i <= ni; i++){
        printf("What is the price of item %d: ", i);
        scanf("%f", &price);
        printf("What is the quantity of item %d: ", i);
        scanf("%f", &number);
        subtotal += price * number;
    }
    printf("Subtotal: £%.2f\nTax: £%.2f\nTotal: £%.2f\n", subtotal, subtotal * 0.055, subtotal * 0.055 + subtotal);
    return 0;
}