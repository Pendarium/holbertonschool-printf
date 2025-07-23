#include "main.h"

/**
* print_numbers - entry point
*
*Écrivez une fonction qui affiche les nombres de 0 à 9,
*suivis d'un saut de ligne.
*
*Prototype : void print_numbers(void);
*Vous ne pouvez utiliser _putchar que deux fois dans votre code.
*
* Return: void
*/

void print_numbers(void)
{
char num;
for (num = '0' ; num <= '9' ; num++)
_putchar(num);
_putchar('\n');
}
