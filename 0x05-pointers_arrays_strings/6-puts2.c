#include "main.h"

/**
 * puts2 - Imprime chaque caractère alternatif
 * d'une chaîne de caractères,en commençant par
 * le premier caractère, suivi d'un saut de ligne.
 * @str: Pointeur vers la chaîne de caractères à imprimer.
 *
 * Description: Cette fonction prend en paramètre
 * un pointeur vers une chaîne de caractères et
 * imprime chaque caractère alternatif de la chaîne, en
 * commençant par le premier caractère, suivi d'un saut de ligne.
 *
 * Return: Aucun.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
