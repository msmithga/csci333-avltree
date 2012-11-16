#ifndef __BST_H__
#define __BST_H__

#include "Node.h"
#include <string>

template <typename T>
class BST {
 private:
  Node<T>* root;
  void traversalPrint(Node<T>* root);

 public:
  BST<T>();
  ~BST<T>();

  bool find(T v, int b);
  void remove(T v);
  void insert(T v, int b);
  void print();
  void printTree();
};

#endif
