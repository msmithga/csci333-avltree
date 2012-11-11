CPP = g++
CPPFLAGS = -Wall -Wextra -Werror

atest: avl_test.cpp AVL.o BST.o Node.o
	$(CPP) $(CPPFLAGS) -o atest $^

AVL.o: AVL.h AVL.cpp
	$(CPP) $(CPPFLAGS) -c AVL.cpp

ttest: tree_test.cpp BST.o Node.o
	$(CPP) $(CPPFLAGS) -o ttest $^

BST.o: BST.h BST.cpp
	$(CPP) $(CPPFLAGS) -c BST.cpp

ntest: node_test.cpp Node.o
	$(CPP) $(CPPFLAGS) -o ntest node_test.cpp Node.o

Node.o: Node.h Node.cpp
	$(CPP) $(CPPFLAGS) -c Node.cpp

clean: 
	rm -f *.o;
	rm -f ntest; rm -f ttest; rm -f atest;
	rm -f *~;