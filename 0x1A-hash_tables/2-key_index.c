#include "hash_tables.h"

/**
 * key_index - Gets the index of a key in the hash table
 * @key: Key string
 * @size: Size of the hash table array
 *
 * Return: Index where the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
