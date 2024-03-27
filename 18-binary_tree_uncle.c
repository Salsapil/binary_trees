#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_uncle - get node uncle
 * @node: nod to get uuncle
 * Return: node or null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
		node->parent == NULL ||
		node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left &&
		node->parent->n == node->parent->parent->left->n)
	{
		return (node->parent->parent->right);
	}
	else
		return (node->parent->parent->left);
}
