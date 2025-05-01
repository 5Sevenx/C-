#ifndef DYNARR_H
#define DYNARR_H

#include <iostream>

using namespace std;

inline void DynamicArray() {
    int size;

    cout << "Enter size of array: " << endl;
    cin >> size;

    int* array = new int [size];

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i  << ": ";
        cin >> array[i];
    }

    for (int i = 0; i < size; i++) {
        cout << array[i] << ' ';
    }

    delete[] array;

}

#endif