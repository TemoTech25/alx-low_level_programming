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
    int i, j, k, len = 0;

    if (ac == 0 || av == NULL)
        return (NULL);
    for (i = 0; i < ac; i++)
        len += strlen(av[i]);
    s = malloc((len + ac) * sizeof(char));
    if (s == NULL)
        return (NULL);
    k = 0;
    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j] != '\0'; j++)
            s[k++] = av[i][j];
        s[k++] = '\n';
    }
    s[k] = '\0';
    return (s);
}

