/**
 * int_index - Searches for an integer
 * in an array using a callback function
 *
 * @array: Array of integers
 * @size: Size of the array
 * @cmp: Pointer to the function to be used
 * to compare values
 *
 * Return: The index of the first element
 * for which cmp doesn't return 0, or -1
 * if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp && size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
