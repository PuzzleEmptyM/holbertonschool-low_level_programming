#include "hash_tables.h"
#include <string.h>

/**
 * search_for_key - Searches if a key already is stores in a list.
 * @key: Key to search for.
 * @list: Pointer to first node of list.
 *
 * Return: Pointer to node with key or NULL if it doesn't exist.
 */

hash_node_t *search_for_key(char *key, hash_node_t *list)
{
	while (list)
	{
		if (strcmp(key, list->key) == 0)
			return (list);
		list = list->next;
	}
	return (NULL);
}

/**
 * hash_table_get - Retrieves value associated with key in a hash table.
 * @ht: Pointer to hash table.
 * @key: Key to search for.
 *
 * Return: Value associated with key or NULL if not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **location = NULL, *node = NULL;
	char *key_cp;

	if (ht && key)
	{
		key_cp = strdup(key);
		index = key_index((unsigned char *) key_cp, ht->size);
		location = ht->array;
		location += index;

		if (*location == NULL)
		{
			free(key_cp);
			return (NULL);
		}
		node = (search_for_key(key_cp, *location));
		if (node)
		{
			free(key_cp);
			return (node->value);
		}
		free(key_cp);
	}
	return (NULL);
}
