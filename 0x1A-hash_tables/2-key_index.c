#include <string.h>
#include "hash_tables.h"
/**
 * key_index - A function  that gives you the index of a key
 * @key: Key to find in index
 * @size: Hash table array size
 * Return: Index where the key-value is store in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int val_hash;

	val_hash = hash_djb2(key);
	return (val_hash % size);
}
