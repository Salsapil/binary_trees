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
		return (0);

	if (tree->left)
		lDepth = 1 + binary_tree_height(tree->left);
	if (tree->right)

		rDepth = 1 + binary_tree_height(tree->right);

	if (lDepth > rDepth)
		return (lDepth);
	else
		return (rDepth);
}
