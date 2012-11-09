CPP = g++
CPPFLAGS = -Wall -Wextra -Werror

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
	rm -f ntest; rm -f ttest;
	rm -f *~;