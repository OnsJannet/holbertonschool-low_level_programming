#include "hash_tables.h"

/**
 * hash_table_get -retrieves a value associated with a key
 * @ht: the hashtable in which to search for the data
 * @key: the key to search the hashtable for.
 *
 * Return: The value that corresponds to the key if it is found, and NULL
 * otherwise. if the hashtable is null, return Null.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int hash;

	if (!key || !*key || !ht)
		return (NULL);
	hash = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[hash];
	while (tmp != NULL)
	{
		if (!strcmp(tmp->key, key))
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
