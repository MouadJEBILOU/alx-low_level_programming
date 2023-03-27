/**
 * _strlen - Calcule la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Description: Cette fonction prend un pointeur vers une chaîne de caractères
 * et calcule la longueur de cette chaîne en comptant le nombre de caractères
 * avant le caractère nul de fin de chaîne.
 *
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
