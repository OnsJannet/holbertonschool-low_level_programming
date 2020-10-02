#include "hash_tables.h"

/**
 * ht_put - Allocates memory for a new node
 * @key: the key to add to the hash table
 * @value: the corresponding value to add to the node
 *
 * Return: 0 if memory allocation fails and 1 if the
 *function returns successfully
 */
hash_node_t *ht_put(const char *key, const char *value)
{
	hash_node_t *n_node;

	n_node = malloc(sizeof(hash_node_t));
	if (!n_node)
		return (NULL);

	n_node->key = strdup(key);
	n_node->value = strdup(value);

	if (!n_node->key || !n_node->value)
	{
		if (n_node->key)
			free(n_node->key);
		free(n_node);
		return (NULL);
	}

	return (n_node);
}


/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to a struct of type hash_table_t
 * @key: key to add
 * @value: associated value to add
 *
 * Return: 1 if it succeede, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	hash_node_t *node, *tmp, *n_node;

	if (!ht || !key || !value || !ht->array || strlen(key) == 0)
		return (0);
	hash = key_index((unsigned char *)key, ht->size);
	node = tmp = ht->array[hash];
	if (node)
	{
		while (tmp)
		{
			if (!strcmp(tmp->key, key))
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
	}

	n_node = ht_put(key, value);
	if (!n_node)
		return (0);
	n_node->next = node;
	ht->array[hash] = n_node;

	return (1);
}
