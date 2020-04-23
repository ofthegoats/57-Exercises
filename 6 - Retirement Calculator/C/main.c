#include<stdio.h>
#include<time.h>

int main(void){
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int year = tm.tm_year + 1900;

    unsigned short int agenow;
    printf("What is your current age? ");
    scanf("%hu", &agenow);

    unsigned short int retireage;
    printf("At what age do you want to retire? ");
    scanf("%hu", &retireage);

    printf("You have %d years left until you can retire\n", retireage - agenow);
    printf("It's %d, so you can retire in %d\n", year, year + (retireage - agenow));


    return 0;
}