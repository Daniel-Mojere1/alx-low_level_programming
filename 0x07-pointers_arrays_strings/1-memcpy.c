#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@s1: memory where is stored
 *@s2: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */

char *_memcpy(char *s1, char *s2, unsigned int n)

{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		s1[r] = s2[r];
		n--;
	}

	return (s1);
}
