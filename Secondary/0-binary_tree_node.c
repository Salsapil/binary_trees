#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - create a node parent
 * @parent: ptr to the node to be created
 * @value: value to put in the new node
 * Return: return a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *bt = malloc(sizeof(binary_tree_t));

	if (!bt)
		return (NULL);
	bt->left = NULL;
	bt->right = NULL;
	bt->n = value;
	bt->parent = parent;
	return (bt);
}
