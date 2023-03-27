#include <stdio.h>
#include "main.h"

/**
 * print_array - Imprime les n premiers éléments
 * d'un tableau d'entiers, suivis d'un saut de ligne.
 * @a: Pointeur vers le tableau d'entiers à imprimer.
 * @n: Nombre d'éléments du tableau à imprimer.
 *
 * Description: Cette fonction prend en paramètre
 * un pointeur vers un tableau d'entiers et le
 * nombre d'éléments à imprimer. Elle imprime les
 * n premiers éléments du tableau, séparés par des
 * virgules et des espaces, suivis d'un saut de ligne.
 *
 * Return: Aucun.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}

	printf("\n");
}
