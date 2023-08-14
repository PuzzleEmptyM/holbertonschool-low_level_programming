#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Pointer to hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **cursor = NULL, *list = NULL, *next = NULL;
	unsigned long int i;

	if (ht)
	{
		cursor = ht->array;

		for (i = 0; i < ht->size; i++)
		{
			list = cursor[i];
			while (list)
			{
				next = list->next;
				free(list->key);
				free(list->value);
				free(list);
				list = next;
			}
		}
		free(ht->array);
		free(ht);
	}
}
