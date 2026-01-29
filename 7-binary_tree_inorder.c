#include "binary_trees.h"

/**
 * binary_tree_inorder - In-order traversal vasitəsilə ağacı gəzir
 * @tree: Gəziləcək ağacın kök düyününə pointer
 * @func: Hər bir düyün üçün çağırılacaq funksiyaya pointer
 *
 * Return: Heç nə (void)
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* 1. Şərt: tree və ya func NULL-dursa, heç nə etmə */
	if (tree == NULL || func == NULL)
		return;

	/* 2. Rekursiv olaraq sol tərəfə get */
	binary_tree_inorder(tree->left, func);

	/* 3. Hazırkı düyündəki funksiyanı icra et */
	func(tree->n);

	/* 4. Rekursiv olaraq sağ tərəfə get */
	binary_tree_inorder(tree->right, func);
}
