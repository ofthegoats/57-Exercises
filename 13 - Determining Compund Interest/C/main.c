#include<stdio.h>
#include<math.h>

void getNum(char* string, float* num){
    printf("What is the %s? ", string);
    scanf("%f", num);
}

int main(void){
    float P, r, t, n;

    getNum("principal amount", &P);
    getNum("rate", &r);
    getNum("number of years", &t);
    getNum("number of times the interest is compounded per year", &n);

    printf("%.2f invested at %.2f%% for %.0f years compounded %.2f times per year is £%.2f.\n", P, r, t, n, P * pow((1 + (r/100)/n), n*t));

    return 0;
}