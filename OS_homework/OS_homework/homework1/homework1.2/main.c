//C program to read a file and display file contents line by line 
//hamarya homework 1.2 xD, 1.2's done with bash


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000


int main()
{
    FILE * fPtr; //file pointer

    char buffer[BUFFER_SIZE];
    int totalRead = 0;

    fPtr = fopen("data/file2.txt", "r");

    if(fPtr == NULL)
    {
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    printf("File opened successfully.\n\n");

    while(fgets(buffer, BUFFER_SIZE, fPtr) != NULL) 
    {
        totalRead = strlen(buffer);
        printf("%s\n", buffer);
    } 

    fclose(fPtr);

    return 0;
}