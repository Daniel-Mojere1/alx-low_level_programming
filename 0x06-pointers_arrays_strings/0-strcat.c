/**
 * @strcat- Write a function that concatenates two strings.
 * Prototype: char *_strcat(char *dest, char *src);
 * This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 * Returns a pointer to the resulting string dest
 * Return: Always 0;
 * /

#include <stdio.h>
#include <string.h>

int main() {
	char dest[20] = "Hello ";
	char src[] ="everyone";
	strcat(dest,src);

	for(int i=0; dest[i]!='\0'; ++i) {
		putchar(dest[i]);
	}
		putchar('\n');

	return 0;
}
