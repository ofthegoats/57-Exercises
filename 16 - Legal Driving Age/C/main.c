#include <stdio.h>

int main(void)
{
    int age = 0;
    printf("What is your age? ");
    scanf("%d", &age);
    if (age >= 16) {
        printf("You are old enough to legally drive.\n");
        return 0;
    } else {
        printf("You are not old enough to legally drive.\n");
        return 0;
    }
}
