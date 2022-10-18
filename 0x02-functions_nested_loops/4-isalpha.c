
#include "main.h"

/**
 * _isalpha - checks if char is alphabet
 * @c: letter to be checked
 * Return: 1 if alpha and 0 if not
 */
int _isalpha(int c)
{
	return (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)));
}
