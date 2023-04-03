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


char *_strcat(char *dest, char *src)
{
	int i;
	int g;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	g = 0;
	while (src[g] != '\0')
	{
		dest[i] = src[g];
		i++;
		g++;
	}
	dest[i] = '\0';


	return (dest);

}
