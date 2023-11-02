#include <stdio.h>
#include "main.h"

/**
 * main - function all arguments it receives
 * @argc: value of arguments
 * @argv: list array of arguments
 *
 * Return: 0 (completion)
 */

int main(int argc, char *argv[]) 
{
	for (int i = 0; i < argc; i++) 
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
