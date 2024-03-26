#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - mesures the height
 * @tree: binary tree
 * Return: size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int lDepth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		lDepth = 1 + binary_tree_depth(tree->parent);

	return (lDepth);
}
