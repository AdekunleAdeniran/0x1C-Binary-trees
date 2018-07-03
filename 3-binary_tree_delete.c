#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/*recursively search for all nodes left and right and delete them*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
