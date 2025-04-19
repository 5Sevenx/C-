#ifndef DYNARR_H
#define DYNARR_H

#include <iostream>

using namespace std;

inline int DynamicArray() {
    int size;

    cout << "Enter size of array: " << endl;
    cin >> size;

    int* array = new int [size];


    delete[] array;

    return 0;
}

#endif