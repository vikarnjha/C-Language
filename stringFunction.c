/*
strcat( ):-
This function is used to concatenates the source string at the end of the target string. For example, “Hello” and “World” on concatenation would result into a string “HelloWorld”.

strlen( ):-
This function is used to counts the number of characters present in a string.

strcpy( ):-
This function is used to copies the contents of one string into another. The base addresses of the source and target strings should be given to this function.

strcmp( ):-
This function is used to compares two strings to find out whether they are same or different. The strcmp() will compare two strings character by character until there is a mismatch or end of one of the strings is reached. If both of the strings are identical, strcmp( ) returns a value zero. If they are not identical, it will return the numeric difference between the ASCII values of the first non-matching pairs of characters.

strrev():-
This function is used to show the reverse of the string.

*/

// Example 1
// int main( ) { 
// char  s[ ] = "Hello" ;
// char  t[30] = "World" ;
// strcat ( t, s ) ;
// printf ( "String = %s", t ) ;
// }
//Output: string = HelloWorld

// Example 2
// int main( ) { 
// char  str[ ] = "Harry" ;
// int  str_length;
// str_length= strlen ( str ) ;
// printf ( " length = %d", str_length );
// }
//Output: length = 5 

// Example 3
// int main( ) { 
// char  s[ ] = "CodeWithHarry" ;
// char  t[20] ;
// strcpy ( t, s ) ;
// printf ( "\n Source string = %s", s ) ;
// printf ( "\n Target string = %s", t ) ; }
//And here is the output...
//Source string = CodeWithHarry
//Target string = CodeWithHarry

// Example 4
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// char string1[ ] = "Harry" ;
// char string2[ ] = "Code" ;
// int a;
// a= strcmp ( string1, string2 ) ;
// printf ("\n%d", a) ;
// return 0;
// }
//Output:5

// Example 5
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// char str[50] = "1234";
// printf("After reversing string is =%s",strrev(str));
// return 0;}
//Output: After reversing string is = 4321

#include<stdio.h>
#include<string.h>

int main()
{
    char s1[]="Vikarn";
    char s2[]="Anupam";
    char s3[50];
    printf("The strcat for s1,s2 returned %s \n",strcat(s1,s2));
    printf("The strlen for s1 returned %d \n",strlen(s1));
    printf("The strlen for s2 returned %d \n",strlen(s2));
    printf("The strlen for s3 returned %d \n",strlen(s3));
    printf("The strcpy from s1 to s3 returned %s \n",strcpy(s3,s1));
    // Here the result is VikarnAnupam because in the first print statement value of s1 has been changed using strcat.
    printf("The strcpy from s2 to s3 returned %s \n",strcpy(s3,s2));
    printf("The strcmp for s1 and s2 returned %d \n",strcmp(s1,s2));
    printf("The strrev for s1 returned %s \n",strrev(s1));
    // Here the result is mapunAnrakiV because in the first print statement value of s1 has been changed using strcat.
    printf("The strrev for s2 returned %s \n",strrev(s2));
    return 0;
}