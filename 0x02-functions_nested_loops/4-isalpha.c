#include "main.h"
/**
 * _isalpha - Checks that it's in alphabetic order
 *
 * @c: alpabet to be check 
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
