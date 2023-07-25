#include "hash_tables.h"

/**
 * key_index - Hashing function that gets unique key for a hash number.
 * @key: Input key.
 * @size: Size of hash table to map to.
 *
 * Return: Index where to store key/value pair in hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key)
	{
		return (hash_djb2(key) % size);
	}
	return (-1);
}
