#include <stdio.h>

/**
* main - Prints the alphabet in lowercase, followed by a new line.
*
* Returns: Written character 0 
*/

int main(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++) 

	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
