/**
 * Name: main.cpp
 * 
 * Test:
 * 
 * Take-away:
 * 
 */

#include <iostream>
using namespace std;

class Test {
    int id { 3 };
    string name { "Mike" };

public:
    Test() = default;
    
    Test(const Test &other) = delete;
    
    Test &operator=(const Test &other) = delete;

    Test(int id) :
            id(id) {
                
    }

    void print() {
        cout << id << ": " << name << endl;
    }
};

int main(int argc, char **argv) {
    
    Test test;
    test.print();
    
    Test test1(77);
    test1.print();
    
/*  Won't work -- we deleted them.
    Test test2 = test1;
    test2 = test;*/
    
	return 0;
}
