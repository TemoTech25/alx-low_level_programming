#include "main.h"
		
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
    char *s;
    int i, j, k, total_length = 0;

    if (ac == 0 || av == NULL)
        return (NULL);
    for (i = 0; i < ac; i++)
        total_length += strlen(av[i]);
    total_length += ac;  // Add the count of arguments for the newline characters
    s = malloc((total_length + 1) * sizeof(char));  // Add 1 for the null terminator
    if (s == NULL)
        return (NULL);
    k = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
        {
            s[k] = av[i][j];
            k++;
        }
        s[k] = '\n';
        k++;
    }
    s[k] = '\0';  // Null terminate the string
    return (s);
}
