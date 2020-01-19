#include "hash_tables.h"
/**
* hash_table_set - function thath adds an element to the hash table
* @ht: hash table to add
* @key: key
* @value: value key
*
* Return: Always
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
int a = 0;

if (ht == NULL || key == NULL)
return (0);
a = key_index((unsigned char *)key, ht->size);
new = malloc(sizeof(new));
if (new == NULL)
return (0);
if (ht->array[a] != NULL && strcmp(key, ht->array[a]->key) == 0)
{
free(ht->array[a]->value);
ht->array[a]->value = strdup(value);
return (1);
}
new->key = strdup(key);
new->value = strdup(value);
new->next = ht->array[a];
ht->array[a] = new;
return (1);
}
