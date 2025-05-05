#ifndef ELEMENTCOUNTER_H
#define ELEMENTCOUNTER_H
#include <iostream>
#include <ostream>

using namespace std;

class ElementCounter {

    static int elementcounter;

    public:


    ElementCounter() {
        elementcounter ++;
    };

    ~ElementCounter() {
        elementcounter ++;
    };

    static int getElementCounter() {
        return elementcounter;
    }

};

    int ElementCounter::elementcounter = 0;

#endif


inline int InitElementCounter() {

    ElementCounter e1;
    ElementCounter e2;

    cout << "Number of elements: " << ElementCounter::getElementCounter() << endl;


    //test self-destruct block
    {
        ElementCounter e3;
        cout << "Number of elements: " << ElementCounter::getElementCounter() << endl;
    }

    cout << "Number of elements: " << ElementCounter::getElementCounter() << endl;


    return 0;
}