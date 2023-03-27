TASK 0 : Write a function that takes a pointer to an int as parameter and updates the value it points to to 98 :
/**
 * reset_to_98 - Met à jour la valeur d'un entier pointé vers 98.
 * @n: Pointeur vers l'entier dont la valeur doit être mise à jour.
 *
 * Description: Cette fonction prend un pointeur vers un entier en paramètre
 * et met à jour la valeur de cet entier à 98.
 * Return: Aucun.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

TASK 1 : Write a function that returns the length of a string :
/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Description: Cette fonction prend un pointeur vers une chaîne de caractères
 * et calcule la longueur de cette chaîne en comptant le nombre de caractères
 * avant le caractère nul de fin de chaîne.
 * Return: La longueur de la chaîne de caractères.
 */
int _strlen(char *s)
{
	int length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
