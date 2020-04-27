#include<stdio.h>
#include<math.h>

int main(void){
    float w, l;
    printf("What is the width of the ceiling in feet? ");
    scanf("%f", &w);

    printf("What is the length of the ceiling in feet? ");
    scanf("%f", &l);

    printf("You will need to purchase %.0lf gallons of paint to cover %.2f square feet.\n", ceil(l * w / 350), l * w);

    return 0;
}