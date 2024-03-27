#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_heightz - mesures the height
 * @tree: binary tree
 * Return: size_t
 */
size_t binary_tree_heightz(const binary_tree_t *tree)
{
	int lDepth = 0, rDepth = 0;

	if (tree == NULL)
		return (0);

	lDepth = 1 + binary_tree_heightz(tree->left);

	rDepth = 1 + binary_tree_heightz(tree->right);

	if (lDepth > rDepth)
		return (lDepth);
	else
		return (rDepth);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;
	if (tree == NULL)
		return (0);
	l = binary_tree_heightz(tree->left);
	r = binary_tree_heightz(tree->right);
	return (l - r);
}
