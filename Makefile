# Author: Nohemi Morales
# format:
# Target: dependencies
#	 Commands to compile and link target using dependencies -o 
CXX = g++ -std=c++11 -g3
dependencies = LinkedList.cpp TestLinkedList.cpp

TestLinkedList: ${dependencies}
	${CXX} -o $^ $@

clean:
	rm -f *.o TestLinkedList