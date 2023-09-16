#include "main.h"

/**
  * _isupper - Check if a letter is uppercase
  * @x: The letter to be checked
  * Return: always 0.
  */

int _isupper(int x)
{
	if (x >= 'A' && x <= 'Z')
	{
	return (1);
	}
	else
	{return (0);
	}
}
