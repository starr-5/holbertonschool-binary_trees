#include "binary_trees.h"

/**
 * binary_tree_height - İkili ağacın hündürlüyünü ölçür
 * @tree: Hündürlüyü ölçüləcək ağacın kök düyününə pointer
 *
 * Return: Hündürlük (size_t). Əgər tree NULL-dursa 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height = 0;
    size_t right_height = 0;

    /* If it is leaf it will return 0 */
    if(tree == NULL){
        return (0);
    }

    /* Calculate the height of the left side */
    if(tree->left){
        left_height = 1 + binary_tree_height(tree->left);
    }

    /* Calculate the height of the right side */
    if(tree->right){
        left_height = 1 + binary_tree_height(tree->right);
    }

    /* Return which part is the heighest */
    if(left_height > right_height){
        return (left_height);
    }
    else{
        return (right_height);
    }
}
