/*
Modes:
Before discussing Files' functions, we have to learn about different modes used along with these functions as a parameter. The following are the modes:

r: opens a file for reading.
w: opens a file for writing. It can also create a new file.
a: opens a file for appending.
r+: opens a file for both reading and writing but cannot create a new file.
w+: opens a file for both reading and writing.
Note: there are many other modes, but these are the basic and most used ones.
Syntax:-
ptr = fopen(“file_location”,”mode”);
fclose(fptr);
*/

#include<stdio.h>

int main()

{
    FILE *ptr = NULL;
    char string[64] = "This is the test message.";

    // ****** Reading a file ******
    // ptr = fopen("file.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file is :- %s",string);

    // ****** Writing a file ******
    ptr = fopen("file.txt", "w");
    fprintf(ptr, "%s", string);
    printf("The content of this file is :- %s",string);
    fclose(ptr);
    return 0;
}
