#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if node is a leafe
 * @node: node to check
 * Return: 1 for leaf 0 if not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !(node->left || node->right));
}
