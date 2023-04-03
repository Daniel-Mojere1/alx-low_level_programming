/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

#include <stdio.h>
#include <string.h>
#include <main.h>

int main() {
    char str1[20] = "Hello";
    char str2[] = " world!";
    _strcat(str1, str2);  /*concatenate str2 to the end of str1*/
    for(int i = 0; str1[i] != '\0'; ++i) {
	    putchar(str1[i]); /* output the concatenated string*/
    }

    return 0;
}
