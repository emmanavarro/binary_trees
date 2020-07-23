#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *ancestor = NULL;

	if (!first || !second)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first->parent == second || first->parent->parent)
	{
		ancestor = binary_trees_ancestor(first->parent, second);
		return (ancestor);
	}


	if (first == second->parent || second->parent->parent)
	{
		ancestor = binary_trees_ancestor(first, second->parent);
		return (ancestor);
	}

	if ((first->parent == second->parent) && (first->parent->parent &&
						  second->parent->parent))
	{
		ancestor = binary_trees_ancestor(first->parent,
						 second->parent);
		return (ancestor);
	}

	ancestor = binary_trees_ancestor(first->parent, second->parent);

	return (ancestor);
}
