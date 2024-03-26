#include <stdlib.h>
#include "binary_trees.h"

void postorderTraversal(binary_tree_t *root)
{
	if (root == NULL)
		return;
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	free(root);
}

void binary_tree_delete(binary_tree_t *tree)
{
	postorderTraversal(tree);
}
