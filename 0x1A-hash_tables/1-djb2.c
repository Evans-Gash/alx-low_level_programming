/**
 * hash_djb2 - it executes a string & converts it to a uique hash no
 * @str: actual string, its unrepeated in the hash table
 *
 * Return: The hash no
*/

unsigned long int hash_djb2(const unsigned char *str)

{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
