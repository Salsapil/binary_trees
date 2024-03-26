#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert right node to a parent
 * @parent: ptr to parent node
 * @value: value to set
 * Return: pointer to node or null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bt = malloc(sizeof(binary_tree_t));

	if (!bt)
		return (NULL);
	bt->n = value;
	bt->left = NULL;
	bt->right = NULL;
	if (!parent)
		return (NULL);
	if (parent->right != NULL)
	{
		parent->right->parent = bt;
		bt->right = parent->right;
	}
	parent->right = bt;
	bt->parent = parent;

	return (bt);
}
