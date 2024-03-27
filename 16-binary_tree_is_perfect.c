#include <stdlib.h>
#include "binary_trees.h"

/**
 * depth - get tree depth
 * @tree: tree to check
 * Return: int
 */
int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}
/**
 * is_perfect - check if tree is perfect
 * @tree: tree to check
 * @d: depth int
 * @level: level int
 * Return: int
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{

	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, d, level + 1) &&
			is_perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - check if binary ttree is perfect
 * @tree: tree to check
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = 0;

	if (tree == NULL)
		return (0);

	d = depth(tree);

	return (is_perfect(tree, d, 0));
}
