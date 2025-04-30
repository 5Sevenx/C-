#ifndef EXECUTIONFUNCTION_H
#define EXECUTIONFUNCTION_H

#include <functional>
#include <iostream>
#include <string>
#include <vector>

#include "../C1/ArrayCount.h"


using namespace std;

const int MAX_SIZE_OF_ARRAY_ARRAYMETHOD = 100;

inline int MainExecutionFunction() {

    int selectmethod;

    string methods[] = {"Array Count","Factorial","Own String length","Swap"};

    cout << "Methods:" << endl;

    for (int i = 0; i < size(methods); i++) {
        cout << i + 1 << "." << methods[i] << endl;
    }
    cout << "Enter the method choice:";
    cin >> selectmethod;



    switch (selectmethod) {
        default: cout << "no such method";
    case 1:
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

        ArrayCount(ArrayC1, UsedSizeOfArrayC1);break;


        case 2:
            Factorital();break;

        case 3:
            OwnStrLen();break;
    }


}


#endif //EXECUTIONFUNCTION_H
