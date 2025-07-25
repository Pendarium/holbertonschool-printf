#include "main.h"

/**
 * _putchar - Fonction qui écrit un caractère sur la sortie standard.
 * @c: Le caractère à écrire.
 *
 * Description: Cette fonction utilise la fonction write pour afficher
 * un caractère sur la sortie standard (stdout).
 *
 * Return: Le nombre de caractères écrits (1 en cas de succès,
 * -1 en cas d'erreur).
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
