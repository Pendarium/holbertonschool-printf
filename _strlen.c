#include "main.h"

/**
 * _strlen - Fonction qui calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Description: Cette fonction parcourt la chaîne de caractères jusqu'au
 * caractère nul ('\0') et compte le nombre de caractères.
 *
 * Issu du projet Holberton School, Pointers, arrays and strings task 2
 *
 * Return: La longueur de la chaîne (hors caractère nul).
 */

int _strlen(char *s)
{
	int length = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
