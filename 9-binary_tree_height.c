#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - mesures the height
 * @tree: binary tree
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lDepth = 0, rDepth = 0;

	if (tree == NULL)
		return -1;

	lDepth = binary_tree_height(tree->left);
	rDepth = binary_tree_height(tree->right);

	if (lDepth > rDepth)
		return (lDepth + 1);
	else
		return (rDepth + 1);
}
