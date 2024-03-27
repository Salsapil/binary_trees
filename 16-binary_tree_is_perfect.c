#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sizez - mesures the size
 * @tree: binary tree
 * Return: int
 */
int binary_tree_sizez(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_sizez(tree->left) + 1 + binary_tree_sizez(tree->right));
}

/**
 * binary_tree_heightz - mesures the height
 * @tree: binary tree
 * Return: int
 */
int binary_tree_heightz(const binary_tree_t *tree)
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
/**
 * binary_tree_balancez - mesures the balance
 * @tree: binary tree
 * Return: int
 */
int binary_tree_balancez(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
		return (0);
	l = binary_tree_heightz(tree->left);
	r = binary_tree_heightz(tree->right);
	return (l == r);
}

/**
 * binary_tree_is_fullz - check if full binary tree
 * @tree: the tree to check
 * Return: 1 or 0
 */
int binary_tree_is_fullz(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if ((tree->left) && (tree->right))
		return (binary_tree_is_fullz(tree->left) &&
				binary_tree_is_fullz(tree->right));

	return (0);
}
/**
 * binary_tree_is_perfect - check if binary ttree is perfect
 * @tree: tree to check
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_fullz(tree) && binary_tree_balancez(tree))
	{
		int height = binary_tree_heightz(tree);
		int perfect_nodes = 1;

		for (int i = 0; i < height; i++)
			perfect_nodes *= 2;
		perfect_nodes--;

		int total_nodes = binary_tree_sizez(tree);

		if (total_nodes == perfect_nodes)
			return (1);
	}

	return (0);
}
