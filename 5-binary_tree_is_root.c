#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - check if node is a root
 * @node: node to check
 * Return: 1 if root, 0 if not
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent);
}
