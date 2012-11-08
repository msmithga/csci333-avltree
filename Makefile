CPP = g++
CPPFLAGS = -Wall -Wextra -Werror

ntest: node_test.cpp Node.o
	$(CPP) $(CPPFLAGS) -o ntest node_test.cpp Node.o

Node.o: Node.h Node.cpp
	$(CPP) $(CPPFLAGS) -c Node.cpp

clean: 
	rm -f *.o;
	rm -f ntest;
	rm -f *~;