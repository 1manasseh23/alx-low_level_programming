#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  shash_table_t *shash_table_create(unsigned long int size)
  {
  shash_table_t *table = malloc(sizeof(shash_table_t));
  if (table == NULL)
  {
  return NULL;
  }
  table->size = size;
  table->array = calloc(size, sizeof(shash_node_t *));
  if (table->array == NULL)
  {
  free(table);
  return NULL;
  }
  table->shead = NULL;
  table->stail = NULL;
  return table;
  }

  int shash_table_set(shash_table_t *ht, const char *key, const char *value)
  {
  shash_node_t *node;
  shash_node_t *prev;
  shash_node_t *new_node;
  shash_node_t *snode;
  unsigned long int index;

  if (ht == NULL || key == NULL || value == NULL)
  {
  return 0;
  }
  index = hash_djb2((unsigned char *)key) % ht->size;
  node = ht->array[index];
  prev = NULL;
  while (node != NULL && strcmp(node->key, key) < 0)
  {
  prev = node;
  node = node->next;
  }
  if (node != NULL && strcmp(node->key, key) == 0)
  {
  free(node->value);
  node->value = strdup(value);
  return 1;
  }
  new_node = malloc(sizeof(shash_node_t));
  if (new_node == NULL)
  {
  return 0;
  }
  new_node->key = strdup(key);
  new_node->value = strdup(value);
  new_node->next = node;
  if (prev == NULL)
  {
  ht->array[index] = new_node;
  }
  else
  {
  prev->next = new_node;
  }
  if (ht->shead == NULL)
  {
  ht->shead = new_node;
  ht->stail = new_node;
  }
  else if (strcmp(new_node->key, ht->shead->key) < 0)
  {
  new_node->snext = ht->shead;
  ht->shead->sprev = new_node;
ht->shead = new_node;
}
else if (strcmp(new_node->key, ht->stail->key) > 0)
{
	new_node->sprev = ht->stail;
	ht->stail->snext = new_node;
	ht->stail = new_node;
}
else
{
	snode = ht->shead;
	while (strcmp(new_node->key, snode->key) > 0)
	{
		snode = snode->snext;
	}
	new_node->sprev = snode->sprev;
	new_node->snext = snode;
	snode->sprev->snext = new_node;
	snode->sprev = new_node;
}
return 1;
}

char *shash_table_get(shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL)
	{
		return NULL;
	}
	index = hash_djb2((unsigned char *)key) % ht->size;
	node = ht->array[index];
	while (node != NULL && strcmp(node->key, key) < 0)
	{
		node = node->next;
	}
	if (node == NULL || strcmp(node->key, key) != 0)
	{
		return NULL;
	}
	return node->value;
}

void shash_table_print(shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	node = ht->shead;
	while (node != NULL)
	{
		printf("%s: %s\n", node->key, node->value);
		node = node->snext;
	}
}

void shash_table_print_rev(shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
	{
		return;
	}
	node = ht->stail;
	while (node != NULL)
	{
		printf("%s: %s\n", node->key, node->value);
		node = node->sprev;
	}
}

void shash_table_delete(shash_table_t *ht)
{
	if (ht == NULL)
	{
		return;
	}
}
*/

typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

unsigned long int hash(const char *key, unsigned long int size)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *key++))
		hash = ((hash << 5) + hash) + c;

	return hash % size;
}

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return NULL;

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return NULL;
	}

	ht->shead = NULL;
	ht->stail = NULL;

	return ht;
}

shash_node_t *shash_node_create(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return NULL;

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	node->sprev = NULL;
	node->snext = NULL;

	return node;
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node;
	shash_node_t *new_node;
	shash_node_t *prev;
	unsigned long int index;
	shash_node_t *snode;

	if (ht == NULL || key == NULL || value == NULL)
		return 0;

	index = hash(key, ht->size);

	node = ht->array[index];
	prev = NULL;

	while (node != NULL && strcmp(node->key, key) < 0)
	{
		prev = node;
		node = node->next;
	}

	if (node != NULL && strcmp(node->key, key) == 0)
	{
		free(node->value);
		node->value = strdup(value);
		return 1;
	}

	new_node = shash_node_create(key, value);
	if (new_node == NULL)
		return 0;

	if (prev == NULL)
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	else
	{
		new_node->next = prev->next;
		prev->next = new_node;
	}

	if (ht->shead == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(new_node->key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else if (strcmp(new_node->key, ht->stail->key) > 0)
	{
		new_node->sprev = ht->stail;
		ht->stail->snext = new_node;
		ht->stail = new_node;
	}
	else
	{
		snode = ht->shead;
		while (strcmp(new_node->key, snode->key) > 0)
			snode = snode->snext;

		new_node->sprev = snode->sprev;
		new_node->snext = snode;
		snode->sprev->snext = new_node;
		snode->sprev = new_node;
	}

	return 1;
}

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;


	if (ht == NULL || key == NULL)
		return NULL;

	index = hash(key, ht->size);

	node = ht->array[index];

	while (node != NULL && strcmp(node->key, key) < 0)
		node = node->next;

	if (node != NULL && strcmp(node->key, key) == 0)
		return node->value;

	return NULL;
}

void shash_table_print(shash_table_t *ht)
{
        shash_node_t *node;

        if (ht == NULL)
        {
                return;
        }
        node = ht->shead;
        while (node != NULL)
        {
                printf("%s: %s\n", node->key, node->value);
                node = node->snext;
        }
}

void shash_table_print_rev(shash_table_t *ht)
{
        shash_node_t *node;

        if (ht == NULL)
        {
                return;
        }
        node = ht->stail;
        while (node != NULL)
        {
                printf("%s: %s\n", node->key, node->value);
                node = node->sprev;
        }
}

void shash_table_delete(shash_table_t *ht)
{
        if (ht == NULL)
        {
                return;
        }
}
