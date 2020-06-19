#include <stdio.h>
#include <string.h>

int main(void)
{
    float amount, tax = 0;
    printf("What is the amount? $");
    scanf("%f", &amount);

    char state[2];
    printf("What is the state? ");
    scanf("%2s", state);

    if ( strcmp(state, "WI") == 0 ) {
        tax = amount * 0.055;
        printf("The tax is $%.2f.\n", tax);
    }

    printf("The total is $%.2f.\n", amount + tax);

    return 0;
}
