#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * count_word - assist function to count the number of words in a string
 * @s: to evaluate
 * Return: word count
 */

char **strtow(char *str)
{
    char **words;
    char *token;
    int i, j, k, word_count = 0, len = 0;

    if (str == NULL || str[0] == '\0')
        return (NULL);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            word_count++;
    }
    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);
    token = strtok(str, " ");
    i = 0;
    while (token != NULL)
    {
        len = strlen(token);
        words[i] = malloc((len + 1) * sizeof(char));
        if (words[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(words[j]);
            free(words);
            return (NULL);
        }
        for (j = 0; j < len; j++)
            words[i][j] = token[j];
        words[i][j] = '\0';
        token = strtok(NULL, " ");
        i++;
    }
    words[i] = NULL;
    return (words);
}
