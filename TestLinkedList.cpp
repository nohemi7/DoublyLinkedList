#include <string>
#include <iostream>
#include "LinkedList.h"

using namespace std;

// Make our assertTrue function
void assertTrue(bool b, string testName) {
    if(b) {
        cout << "PASSED: " << testName << endl;
    }
    else {
        cout << "FAILED: " << testName << endl;
    }
}

// Unit Testing requires us to make a class
// naming convention [classname]Test
class LinkedListTest {
    public:
        void test_operator_eqeq() {
            LinkedList l1;
            LinkedList l2;

            // Case 1: Both Empty Lists
            assertTrue(l2 == l1, "empty lists ==");

            l1.append(1);

            //Case 2: Not same length
            assertTrue(!(l2 == l1), "l1 = [1], l2 = []");
            
            l2.append(1);
            
            // Case 3: Same length and same values
            assertTrue(l1 == l2, "l1 = [1], l2 = [1]");

            l1.append(2);
            l2.append(3);

            // Case 4: Same length different values
            assertTrue(!(l1 == l2), "l1 = [1, 2], l2 = [1, 3]");
        }

};

int main() {
    LinkedListTest test;
    test.test_operator_eqeq();
    return 0;
}