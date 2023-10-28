#include "main.h"

/**
 *  _strcat - print function concatenates two strings
 *  @dest: inserted value
 *  @src: inserted value
 *
 *  Return: void
 */

char *_strcat(char *dest, char *src)
{
        	int k;
        	int b;

        	k = 0;
        	while (dest[k] != '\0')
        	{
                    	k++;
        	}
        	b = 0;
        	while (src[b] != '\0')
        	{
                    	dest[k] = src[b];
                    	k++;
                    	b++;
        	}
        	dest[k] = '\0';
        	return (dest);
}
