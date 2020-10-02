#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: a pointer to the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	int comma = 0;
	unsigned int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (comma == 0)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				comma = 1;
			}
			else
				printf(", '%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
