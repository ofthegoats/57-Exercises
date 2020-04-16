#include<stdio.h>
#include<string.h>

#define STRMAXSIZE 100

int main(void){
    char name[STRMAXSIZE];
    char quote[STRMAXSIZE];

    printf("What is the quote? ");
    fgets(quote, STRMAXSIZE, stdin);
    quote[strlen(quote)-1] = 0;//get rid of \n

    printf("Who said it? ");
    fgets(name, STRMAXSIZE, stdin);
    name[strlen(name)-1] = 0;//get rid of \n

    printf("%s says, \"%s.\"", name, quote);

    return 0;
}