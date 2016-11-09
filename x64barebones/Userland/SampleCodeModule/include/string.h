#ifndef _STRING_
#define _STRING_


/*  Sorts de string str in reverse and returns it */
char* strrev(char* str);

/* Appends the first n characters of the string pointed to, by str2 to the end of the string pointed to by str1 */
char* strncat(char* str1, char* str2, int n);

/* Finds the index of the first appearance of the character s in the string str1 */
int strpbrk(char* str1, char s);

/* Appends the string pointed to, by str2 to the end of the string pointed to by str1 */
char* strcat(char* str1, char* str2);

/* Returns 1 if the string str1 contains the string str2 and 0 if it doesnt */
int strstr(char* str1, char* str2);

/* Computes the length of the string str up to but not including the terminating null character */
int strlen(char* str);


#endif