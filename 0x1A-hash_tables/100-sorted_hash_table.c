#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: Size of the array
 *
 * Return: A pointer to the newly created sorted hash table, or NULL if failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = NULL;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->shead = NULL;
	new_table->stail = NULL;

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: Sorted hash table to add the element to
 * @key: Key string
 * @value: Value associated with the key
 *
 * Return: 1 if success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node = NULL, *current = NULL;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			/* Free the existing value and update with the new value */
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	/* Insert the new node into the sorted linked list */
	if (insert_into_sorted_list(ht, new_node) == 0)
		return (0);

	return (1);
}

/**
 * insert_into_sorted_list - Inserts a node into the sorted linked list
 * @ht: Sorted hash table
 * @new_node: Node to be inserted
 *
 * Return: 1 on success, 0 on failure
 */
int insert_into_sorted_list(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current, *prev;

	if (ht == NULL || new_node == NULL)
		return (0);

	current = ht->shead;
	prev = NULL;

	while (current != NULL && strcmp(current->key, new_node->key) < 0)
	{
		prev = current;
		current = current->snext;
	}

	if (prev == NULL)
	{
		new_node->snext = ht->shead;
		ht->shead = new_node;
	}
	else
	{
		new_node->snext = current;
		prev->snext = new_node;
	}

	if (current == NULL)
		ht->stail = new_node;

	new_node->sprev = prev;

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key from the sorted hash table
 * @ht: Sorted hash table to search
 * @key: Key string
 *
 * Return: The value associated with the key, or NULL if key not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table using the sorted linked list
 * @ht: Sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->shead;

	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order using the sorted linked list
 * @ht: Sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	current = ht->stail;

	printf("{");
	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		if (current != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table
 * @ht: Sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *next;

	if (ht == NULL)
		return;

	current = ht->shead;

	while (current != NULL)
	{
		next = current->snext;
		free(current->key);
		free(current->value);
		free(current);
		current = next;
	}

	free(ht->array);
	free(ht);
}
