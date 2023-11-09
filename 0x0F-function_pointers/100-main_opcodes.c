#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    int i, num_bytes;
    unsigned char *ptr;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    num_bytes = atoi(argv[1]);

    if (num_bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    ptr = (unsigned char *)main;

    for (i = 0; i < num_bytes; i++)
    {
	     if (i == bytes - 1)
	     {
        printf("%02x", ptr[i]);
	break;
	     }

    printf("\n");
    }

    return (0);
}
