#include "binary_trees.h"

/**
 * binary_tree_inorder - In-order traversal vasitəsilə ağacı gəzir
 * @tree: Gəziləcək ağacın kök düyününə pointer
 * @func: Hər bir düyün üçün çağırılacaq funksiyaya pointer
 *
 * Təsvir: Əgər tree və ya func NULL-dursa, heç nə etmə.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)) {
    binary_tree_t *new_mode;

    new_node = malloc(sizeof(binary_trees_t));
    if(new_node == NULL)
        return (NULL);
    
    new_node->n = value;
    new_node->parent = parent;

    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}
