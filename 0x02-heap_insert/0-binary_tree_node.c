#include "binary_trees.h"

/**
 * binary_tree_node - create new node
 * @parent: root node
 * @value: value of a node in binary tree
 * Return: new nodo
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodoN = malloc(sizeof(*nodoN));

	if (!nodoN)
		return (NULL);
	nodoN->n = value;
	nodoN->left = NULL;
	nodoN->right = NULL;
	nodoN->parent = parent;
	return (nodoN);
}
