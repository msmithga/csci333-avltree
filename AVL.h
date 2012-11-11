#ifndef __AVL_H__
#define __AVL_H__

#include "BST.h"
#include <string>

template <typename T>
class AVL {
 private:
  Node<T>* root;
  int balance;
  void inOrder(Node<T>* root);
  void postOrder(Node<T>* root);
  void rotateRight(Node<T>* cn);
  void rotateLeft(Node<T>* cn);

 public:
  AVL<T>();
  ~AVL<T>();

  void inOrderTraversal();
  void postOrderTraversal();

};


#endif

