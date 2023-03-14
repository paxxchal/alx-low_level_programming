#include "hash_tables.h"

/**
 * key_index - get the index of a key in a hash table
 * @key: the key to look up
 * @size: the size of the hash table's array
 *
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val = hash_djb2(key);
	unsigned long int index = hash_val % size;
	return index;
}
