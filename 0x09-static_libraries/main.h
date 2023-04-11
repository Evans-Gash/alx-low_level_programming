#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Auth: Nwhator
 * Desc: Header file containing the prototypes of all functions
 *       included in the static library libmy.a.
 */
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
@@ -20,4 +27,5 @@ char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

#endif
