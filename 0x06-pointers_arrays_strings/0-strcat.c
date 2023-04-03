
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
	char dest[20] = "Hello ";
	char src[] ="everyone";
	strcat(dest,src);

	for(int i=0; dest[i]!='\0'; ++i) {
		putchar(dest[i]);
	}
		putchar('\n');

	return 0;
}
