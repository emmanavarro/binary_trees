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
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);
	balance_f = left_height - right_height;

	return (balance_f);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL)
		height_left = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		height_right = 1 + binary_tree_height(tree->right);

	if (height_left >= height_right)
		return (height_left);
	else
		return (height_right);
}
