#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFERSIZE 200

int main(void){
        char string[BUFFERSIZE];

        printf("What is the input string? ");

        fgets(string, BUFFERSIZE, stdin);

	unsigned int len;
	len = strlen(string);
	string[len-1] = 0;//remove newline
	printf("%s is %d characters long", string, len-1);

        return 0;
}
