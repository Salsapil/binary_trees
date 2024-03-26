#include <stdlib.h>
#include "binary_trees.h"
/**
 * postorderTraversal - traferese and free node
 * @root: current node
 * Return: void
 */
void postorderTraversal(binary_tree_t *root)
{
	if (root == NULL)
		return;
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	free(root);
}
/**
 * binary_tree_delete - free binary tree
 * @tree: tree root
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	postorderTraversal(tree);
}
