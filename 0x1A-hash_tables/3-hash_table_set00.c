#include "hash_tables.h"

/**
 * set_pair - Allocates memory for a key/value pair in the hash table.
 * @node: A pointer to the hash table array node.
 * @key: The key, a non-empty string.
 * @value: The value associated with the key, can be an empty string.
 *
 * Return: 1 on success, 0 on error.
 */
int set_pair(hash_node_t **node, const char *key, const char *value)
{
	*node = malloc(sizeof(hash_node_t));
	if (*node == NULL)
		return (0);

	(*node)->key = strdup(key);
	if ((*node)->key == NULL)
	{
		free(*node);
		return (0);
	}

	(*node)->value = strdup(value);
	if ((*node)->value == NULL)
	{
		free((*node)->key);
		free(*node);
		return (0);
	}

	return (1);
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: A pointer to the hash table.
 * @key: The key, a non-empty string.
 * @value: The value associated with the key, can be an empty string.
 *
 * Return: 1 on success, 0 on error.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node == NULL)
	{
		if (set_pair(&node, key, value) == 0)
			return (0);
		node->next = NULL;
		return (1);
	}

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (strcmp(node->value, value) == 0)
				return (1);

			free(node->value);
			node->value = strdup(value);

			if (node->value == NULL)
				return (0);

			return (1);
		}
		node = node->next;
	}

	if (node == NULL)
	{
		if (set_pair(&node, key, value) == 0)
			return (0);
		node->next = ht->array[index];
		ht->array[index] = node;
		return (1);
	}

	return (0);
}
