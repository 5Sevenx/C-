
#ifndef CASE5_H
#define CASE5_H
#include<iostream>
using namespace std;
#include "../../C2/ArrayCopy.h"

inline void Case5() {
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
#endif //CASE5_H
