#include "AVL.h"
#include <iostream>

template <typename T>
AVL<T>::AVL() {
  root = 0;
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
void AVL<T>::rotateRight(Node<T>** cn) {
  Node<T>* curr = *cn;

  *cn = (*cn)->getLeftChild();
  curr->setLeftChild(*((*cn)->getRightChild()));
  (*cn)->setRightChild(*curr);

}

template <typename T>
void AVL<T>::rotateLeft(Node<T>** cn) {
  Node<T>* curr = *cn;

  *cn = (*cn)->getRightChild();
  curr->setRightChild(*((*cn)->getLeftChild()));
  (*cn)->setLeftChild(*curr);

}

template <typename T>
void AVL<T>::rotate(T v) {
  Node<T>** curr = &root;
  while(*curr != 0) {
      if(v < (*curr)->getValue()) {
	curr = &((*curr)->getLeftChild());
      }else if(v > (*curr)->getValue()) {
	curr = &((*curr)->getRightChild());
      }
    }
    if((*curr)->getBalance() == -1) {
      rotateLeft(curr);
    }else {
      rotateRight(curr);
    }
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
