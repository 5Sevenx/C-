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

inline void InitArrayCopy() {
    int SizeOfArrayForCopy;
    cout << "Enter size of array:" << endl;
    cin >> SizeOfArrayForCopy;

    int ArrC2[SizeOfArrayForCopy] = {};
    cout << "Enter value for each element:" << endl;

    for (int i = 0; i < SizeOfArrayForCopy; i++) {
        cout << "Element " << i << ":";
        cin >> ArrC2[i];}

    cout << "Array [";

    for (int i = 0; i < SizeOfArrayForCopy; i++) {
        cout << " " << ArrC2[i] << " ";}

    cout << "]" << endl;

    int *NewArrC2 = new int[SizeOfArrayForCopy];

    ArrayCopy(ArrC2, NewArrC2, SizeOfArrayForCopy);
    delete[] NewArrC2;
};

#endif