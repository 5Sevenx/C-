
#ifndef CASE1_H
#define CASE1_H

using namespace std;
#include <iostream>
#include "Methods/C1/ArrayCount.h"
const int MAX_SIZE_OF_ARRAY_ARRAYMETHOD = 100;

inline int Case1() {
    int ArrayC1[MAX_SIZE_OF_ARRAY_ARRAYMETHOD];
    int UsedSizeOfArrayC1;
    cout << "Enter the size of the array(Max:" << MAX_SIZE_OF_ARRAY_ARRAYMETHOD << ")"  << endl;
    cin >> UsedSizeOfArrayC1;

    if (UsedSizeOfArrayC1 > MAX_SIZE_OF_ARRAY_ARRAYMETHOD || UsedSizeOfArrayC1 < 1) {
        cout << "Invalid size of array" << endl;
        return 1;
    }

    for (int i = 0; i < UsedSizeOfArrayC1; i++) {
        cout << "Element " << i << ":";
        cin >> ArrayC1[i];
    }

    ArrayCount(ArrayC1, UsedSizeOfArrayC1);
    return 0;
};
#endif //CASE1_H
