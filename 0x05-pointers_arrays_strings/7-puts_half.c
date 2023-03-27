#include "main.h"

/**
 * puts_half - Imprime la moitié d'une chaîne de caractères,
 *             suivie d'un saut de ligne.
 * @str: Pointeur vers la chaîne de caractères à imprimer.
 *
 * Description: Cette fonction prend en paramètre
 * un pointeur vers une chaîne de caractères et
 * imprime la deuxième moitié de la chaîne, suivie d'un saut
 * de ligne. Si la longueur de la chaîne est impaire,
 * elle imprime les derniers caractères de la chaîne
 * qui forment la deuxième moitié.
 *
 * Return: Aucun.
 */
void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
