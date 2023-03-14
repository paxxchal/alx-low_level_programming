#include "hash_tables.h"

/**
 * shash_table_create - Creates a new sorted hash table
 *
 * @size: The size of the array
 *
 * Return: If successful, a pointer to the new sorted hash table.
 * Otherwise, NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds or updates an element in a sorted hash table
 *
 * @ht: The sorted hash table to add or update the element in
 * @key: The key of the element to add or update
 * @value: The value of the element to add or update
 *
 * Return: If successful, 1. Otherwise, 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *temp_node;
	unsigned long int index;
	char *new_value;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_value = strdup(value);
	if (new_value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->value = new_value;
	index = key_index((unsigned char *)key, ht->size);

	temp_node = ht->array[index];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = new_value;
			free(new_node->key);
			free(new_node);
			return (1);
		}
		temp_node = temp_node->next;
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	shash_list_insert(ht, new_node);

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash table
 * @key: the key to look for
 *
 * Return: the value associated with the key, or NULL if key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 *
 * @ht: The sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;
	unsigned long int i;
	int comma = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			comma = 1;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse
 *
 * @ht: The sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;
	int comma = 0;

	if (!ht)
		return;

	printf("{");
	node = ht->stail;
	while (node)
	{
		if (comma)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		comma = 1;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 *
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *tmp;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			tmp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * shash_list_insert - Inserts a node into a sorted linked list
 * @ht: Pointer to the hash table
 * @new_node: Pointer to the new node to insert
 *
 * Return: void
 */
void shash_list_insert(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current;

	if (!ht || !new_node)
		return;

	/* If list is empty */
	if (!ht->shead)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		return;
	}

	/* If new node is less than the head, insert at head */
	if (strcmp(new_node->key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
		return;
	}

	/* If new node is greater than the tail, insert at tail */
	if (strcmp(new_node->key, ht->stail->key) > 0)
	{
		ht->stail->snext = new_node;
		new_node->sprev = ht->stail;
		ht->stail = new_node;
		return;
	}

	/* Find correct position in list to insert new node */
	current = ht->shead;
	while (current)
	{
		if (strcmp(new_node->key, current->key) < 0)
		{
			new_node->sprev = current->sprev;
			new_node->snext = current;
			current->sprev->snext = new_node;
			current->sprev = new_node;
			return;
		}
		current = current->snext;
	}
}
