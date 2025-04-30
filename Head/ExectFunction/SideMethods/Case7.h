//
// Created by qwert on 4/29/2025.
//

#ifndef CASE7_H
#define CASE7_H

#include<iostream>
using namespace std;
#include "../../C2/PointerArray.h"

inline void Case7() {
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
#endif //CASE7_H
