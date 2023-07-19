#include "main.h"

/**
  * _isalpha - alphabet checker
  * @l: character undergoing checking
  *
  * Return: 1 for alphabetic character or 0 for anything else
  */
int _isalpha(int l)
{
	if ((l >= 65 && l <= 90) || (l >= 97 && l <= 122))
	{
		return (1);
	}

	return (0);
}
