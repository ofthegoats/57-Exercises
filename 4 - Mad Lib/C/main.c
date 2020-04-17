#include<stdio.h>
#include<string.h>

#define STRINGMAX 100

void getWord(char* type, char* word, size_t len){
    printf("Enter a %s: ", type);
    fgets(word, len, stdin);
    word[strlen(word)-1] = 0;//remove \n
}

int main(void){
    char noun[STRINGMAX], verb[STRINGMAX], adj[STRINGMAX], adv[STRINGMAX];

    //DRY

    getWord("noun", noun, sizeof noun);
    getWord("verb", verb, sizeof verb);
    getWord("adjective", adj, sizeof adj);
    getWord("adverb", adv, sizeof adv);

    printf("Do you %s your %s %s %s? That's hilarious!\n", verb, adj, noun, adv);

    return 0;
}