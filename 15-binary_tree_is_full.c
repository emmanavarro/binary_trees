#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if full, otherwise 0. 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full = 0, right_full = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_full = left_full + binary_tree_is_full(tree->left);

	if (tree->right)
		right_full = right_full + binary_tree_is_full(tree->right);

	if ((left_full + right_full) % 2 == 0)
		return (1);

	else
		return (0);
}
