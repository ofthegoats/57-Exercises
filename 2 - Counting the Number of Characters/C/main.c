#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFERSIZE 10 //because that's an ok buffersize

int main(void){
    char *string = calloc(1, 1), buffer[BUFFERSIZE];
    printf("What is the input string? ");
    while( fgets(buffer, BUFFERSIZE, stdin)){
        string = realloc(string, strlen(string)+1+strlen(buffer));
        strncat(string, buffer, BUFFERSIZE);
        if(string[strlen(string)-1] == '\n') break;//LIKE a delimiter for newline
    }
    string[strlen(string)-1] = 0;//just getting rid of the newline
    printf("%s is %lu characters long\n", string, strlen(string));

    free(string);//free the memory allocated to holding the string

    return 0;
}