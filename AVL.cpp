#include "AVL.h"
#include <iostream>

template <typename T>
AVL<T>::AVL() {
  root = 0;
  balance = 0;
}

template <typename T>
AVL<T>::~AVL() {

}

template <typename T>
void AVL<T>::inOrderTraversal() {
  inOrder(root);
}

template <typename T>
void AVL<T>::postOrderTraversal() {
  postOrder(root);
}

template <typename T>
void AVL<T>::rotateRight(Node<T>* cn) {
  Node<T>* criticalNode = cn;

}

template <typename T>
void AVL<T>::rotateLeft(Node<T>* cn) {
  Node<T>* criticalNode = cn;
}

template <typename T>
void AVL<T>::inOrder(Node<T>* root) {
  if(root != 0) {
    inOrder(root->getLeftChild());
    std::cout << root->getValue() << std::endl;
    inOrder(root->getRightChild());
  }
}

template <typename T>
void AVL<T>::postOrder(Node<T>* root) {
  if(root != 0) {
    postOrder(root->getLeftChild());
    postOrder(root->getRightChild());
    std::cout << root->getValue() << std::endl;
  }
}

template class AVL<int>;
template class AVL<double>;
template class AVL<std::string>;
