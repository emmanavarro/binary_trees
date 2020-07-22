#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0, balance_f = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_height = 1 + binary_tree_balance(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_balance(tree->right);
	balance_f = left_height - right_height;

	return (balance_f);
}
