#include<stdio.h>

int main(void){
    float l;
    printf("What is the length of the room in feet? ");
    scanf("%f", &l); 

    float w;
    printf("What is the width of the room in feet? ");
    scanf("%f", &w);

    printf("The area is\n%.3f square feet\n%.3f square metres\n", l * w, l * w * 0.09290304);

    return 0;
}