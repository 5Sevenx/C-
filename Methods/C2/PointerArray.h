#ifndef ARRPTR_H
#define ARRPTR_H

#include <iostream>

using namespace std;

inline void PointerArray(int *arr,int size) {

    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
        cout << "Elememt in position " << i << ",Multiplied x2: " << arr[i] << endl;
    }
}

inline void InitPointerArray() {
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

    int* ptr = ArrC2;

    PointerArray(ptr, SizeOfArrayForCopy);
};
#endif
