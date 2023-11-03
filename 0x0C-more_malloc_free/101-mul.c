#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *s)
{
    while (*s)
    {
        if (!isdigit(*s))
            return (0);
        s++;
    }

    return (1);
}

/**
 * mul - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: product of num1 and num2
 */
long long mul(char *num1, char *num2)
{
    long long result = 0;
    int i = 0, j = 0;

    while (num1[i])
        i++;
    while (num2[j])
        j++;

    while (i >= 0 && j >= 0)
    {
        result += (num1[i] - '0') * (num2[j] - '0') * pow(10, i + j - 1);
        i--;
        j--;
    }

    return (result);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if successful, 98 if an error occurs
 */
int main(int argc, char *argv[])
{
    long long num1, num2;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    if (!is_digit(argv[1]) || !is_digit(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    num1 = atoll(argv[1]);
    num2 = atoll(argv[2]);

    printf("%lld\n", num1 * num2);

    return (0);
}
