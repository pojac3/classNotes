/**
 * New Chapter in the Textbook!
 * Binary Trees
 * Empty node is a Binary Tree
 * A node that is not empty has AT MOST two children
 * a left BT that is empty or not empty and a right BT that is empty or not empty
 * We represent BT's with boxes and circles. a circle represents a node with children, and a box represents a node with no children
 * A node with two empty children is a leaf node
 * A node without a parent is the root of the tree
 * The root of the tree has a height of one, its children have a height of 2, etc.
 * The height of the tree is the maximum height of its leaf node
 * Operations on a Binary Tree:
 * - height(); <- gets the HEIGHT of the tree
 * - setLeft();
 * - setRight();
 * - removeLeft();
 * - removeRight();
 * We could do setLeft() and set it to NULL, meaning essentially that we are deleting it
 * - size(); <- gets the TOTAL NUMBER OF NODES
 * - info();
 * - getLeft();
 * - getRight();
 * - root();
 * - find(); <-NOT NATURALLY SUPPORTED IN A BINARY TREE
 * What is the maximum number of non-empty nodes in a BT of height h?
 * When a BT of height h has the maximum number of nodes, we call this a full Binary Tree
 * What is the minimum height of a BT with n nodes?
 * n = 1 : h = 1
 * n = 2 : h = 2
 * n = 3 : h = 2
 * n = 4 : h = 3
 * (2^h)-1 >= n
 * SEE PICTURE FOR HOW TO ANSWER THIS QUESTION
 * Best way to optimize it to use the least number of operations?
 * The max height is n, min height is log(n)
 * We will learn about BinarySearchTree
 * The time it takes to search is proportional to the height of the tree!!
 * HEIGHT OF THE TREE MATTERS!
 * 
 */
#include <iostream>
using namespace std;

/**
 * B I N A R Y  T R E E ==========================================================================  B I N A R Y  T R E E 
 */
template <class DT>
class BinaryTree {
protected:
    DT* _root;
    BinaryTree<DT>* _left;
    BinaryTree<DT>* _right;
public:
    BinaryTree();
    BinaryTree(DT& info);
    BinaryTree(const BinaryTree &M);
    BinaryTree(int x);
    virtual ~BinaryTree();
    int size();
    int height();
};

template <class DT>
BinaryTree<DT>::BinaryTree() {
    _root = NULL;
    _right = NULL;
    _left = NULL;
}

template <class DT>
int BinaryTree<DT>::size() {
    if (_root == NULL) {
        return 0;
    }
    else {
        return _left->size() + _right->size() + 1;
    }
}

template <class DT>
int BinaryTree<DT>::height() {
    if (_root == NULL) {
        return 0;
    }
    else {
        return 1 + (_left->height() > _right->height() ? _left->height() : _right->height());
        
    }
}

int main() {
    BinaryTree<int> myBT(100);
    
}
