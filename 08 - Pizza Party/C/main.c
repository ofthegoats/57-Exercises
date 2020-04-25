#include<stdio.h>

int main(void){
    int noPeople;
    printf("How many people? ");
    scanf("%d", &noPeople);

    int noPizza;
    printf("How many pizzas? ");
    scanf("%d", &noPizza);

    int noSlices;
    printf("How many slices? ");
    scanf("%d", &noSlices);

    printf("%d people with %d pizzas, each of %d slices\n", noPeople, noPizza, noSlices);
    printf("Each person gets %d slices.\n", noPizza * noSlices / noPeople);
    printf("There are %d leftover slices.\n", noPizza * noSlices % noPeople);

    return 0;
}