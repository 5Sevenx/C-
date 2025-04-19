#ifndef ARRPTR_H
#define ARRPTR_H

#include <iostream>

using namespace std;

inline void PtrArr(int *arr,int size) {

    for (int i = 0; i < size; i++) {

        arr[i] *= 2;
        cout << "Elememt in position " << i << ",Multiplied x2: " << arr[i] << endl;
    }

}

#endif
