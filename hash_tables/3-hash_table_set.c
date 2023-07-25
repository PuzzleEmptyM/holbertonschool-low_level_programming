#include "hash_tables.h"
#include <string.h>

/**
 * create_node - Creates node of type hash_node_t.
 * @key: Key value.
 * @value: Value value.
 *
 * Return: Pointer to new node.
 */

hash_node_t *create_node(char *key, char *value)
{
	hash_node_t *new = NULL;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = key;
	new->value = value;
	new->next = NULL;

	return (new);
}

/**
 * search_key - Searches if a key already is stores in a list.
 * @key: Key to search for.
 * @list: Pointer to first node of list.
 *
 * Return: Pointer to node with key or NULL if it doesn't exist.
 */

hash_node_t *search_key(char *key, hash_node_t *list)
{
	while (list)
	{
		if (strcmp(key, list->key) == 0)
		{
			return (list);
		}
		list = list->next;
	}
	return (NULL);
}

/**
 * hash_table_set - Adds new element to a hash table.
 * @ht: Pointer to hash table.
 * @key: Key string.
 * @value: Value associated with key.
 *
 * Return: 1 on success, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t **location = NULL, *new = NULL;
	char *key_cp, *value_cp;

	if (ht && key)
	{
		key_cp = strdup(key);
		if (!(key_cp))
			return (0);
		value_cp = strdup(value);
		if (!(value_cp))
			return (0);

		index = key_index((unsigned char *) key_cp, ht->size);
		location = (ht->array);
		location += index;

		if (*location != NULL)
		{
			new = search_key(key_cp, *location);
			if (new)
			{
				free(new->value);
				free(new->key);
				new->value = value_cp;
				new->key = key_cp;
				return (1);
			}
			new = create_node(key_cp, value_cp);
			new->next = *location;
			*location = new;
			return (1);
		}
			new = create_node(key_cp, value_cp);
			if (!new)
				return (0);
			*location = new;
			return (1);
	}
	return (0);
}
