#include "binary_trees.h"

/**
 * binary_tree_postorder - Post-order traversal vasitəsilə ağacı gəzir
 * @tree: Gəziləcək ağacın kök düyününə pointer
 * @func: Hər bir düyün üçün çağırılacaq funksiyaya pointer
 *
 * Return: Heç nə (void)
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int)) {
    if(tree == NULL || func == NULL)
        Return;
    
    binary_tree_postorder(tree->left, func);

    binary_tree_postorder(tree->right, func);

    func(tree->n);
}
