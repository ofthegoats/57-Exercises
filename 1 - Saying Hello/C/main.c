#include<stdio.h>

int main(void){
    char name[40];
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s, nice to meet you!\n", name);

    return 0;
}