#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert left node to a parent
 * @parent: ptr to parent node
 * @value: value to set
 * Return: pointer to node or null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bt;

	if (parent == NULL)
		return (NULL);

	bt = binary_tree_node(parent, value);
	if (bt == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		bt->left = parent->left;
		parent->left->parent = bt;
	}
	parent->left = bt;

	return (bt);
}
