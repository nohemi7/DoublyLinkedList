# Author: Nohemi Morales
# format:
# Target: dependencies
#	 Commands to compile and link target using dependencies -o 
CXX = g++ -std=c++11 -g3

dependencies = TestLinkedList.o LinkedList.o 

TestLinkedList: ${dependencies}
	${CXX} -o $@ $^

clean:
	rm -f *.o TestLinkedList