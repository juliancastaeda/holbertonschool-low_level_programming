#include "hash_tables.h"
/**
  * key_index - index
  * @key: pointer
  * @size: is the size array
  *
  * Return: int
  **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int a;

	a = hash_djb2(key) % size;
	return (a);
}
