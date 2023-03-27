/**
 * _strcpy - Copie la chaîne de caractères source dans
 * la chaîne de caractères destination, en incluant
 * le caractère de fin de chaîne.
 * @dest: Pointeur vers la chaîne de caractères destination.
 * @src: Pointeur vers la chaîne de caractères source.
 *
 * Description: Cette fonction prend en paramètre deux
 * pointeurs vers des chaînes de caractères. Elle copie
 * la chaîne de caractères source, y compris le caractère
 * de fin de chaîne, dans la chaîne de caractères
 * destination. La fonction renvoie un pointeur vers
 * la chaîne de caractères destination.
 *
 * Return: Un pointeur vers la chaîne de caractères
 * destination.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
