#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - find sibiling
 * @node: node to get sibling
 * Return: binary_tree_t or null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left && node->n == node->parent->left->n)
	{
		return (node->parent->right);
	}
	else
		return (node->parent->left);
}
