#ifndef CPARRPTR_H
#define CPARRPTR_H

#include <iostream>
#include <ostream>

using namespace std;

inline void ArrayCopy(int* src,int* dest, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Copying: src[" << i << "] = " << src[i] << " -> dest[" << i << "]" << endl;
        dest[i] = src[i];
    }

    cout << "Final dest array: ";
    for (int i = 0; i < size; i++) {
        cout << dest[i] << ' ';
    }
    cout << endl;
}



#endif