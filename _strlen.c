#include "main.h"

/**
 * _strlen - Calcule la longueur d'une chaîne de caractères
 * @s: pointeur vers la chaîne de caractères à mesurer
 *
 * Return: la longueur de la chaîne (sans compter le caractère nul),
 *         ou 0 si le pointeur est NULL
 */

int _strlen(char *s)
{
    int length = 0;

    /* Si la chaîne est NULL, retourne 0 */
    if (s == NULL)
        return (0);

    /* Compte les caractères jusqu'au caractère nul */
    while (s[length] != '\0')
        length++;

    return (length);
}
