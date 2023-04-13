#include <stdlib.h>   /* for malloc and free */
#include <string.h>   /* for strlen */

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to concatenate from s2
 *
 * Return: Pointer to the concatenated string or NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int s1_len, s2_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	concat_str = malloc(sizeof(char) * (s1_len + n + 1));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		concat_str[i] = s1[i];
	for (j = 0; j < n; j++)
		concat_str[i + j] = s2[j];
	concat_str[i + j] = '\0';

	return (concat_str);
}
