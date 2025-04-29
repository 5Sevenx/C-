#ifndef EXECUTIONFUNCTION_H
#define EXECUTIONFUNCTION_H

#include <functional>
#include <iostream>
#include <string>
#include <vector>

#include "../C1/ArrayCount.h"


using namespace std;

const int MAX_SIZE = 100;

inline int MainExecutionFunction() {

    int selectmethod;

    string methods[] = {"Array Count","Factorial","Own String length","Swap"};

    cout << "Methods:" << endl;

    for (int i = 0; i < size(methods); i++) {
        cout << i << "." << methods[i] << endl;
    }
    cout << "Enter the method choice:";
    cin >> selectmethod;




    int sizeOfArrayC1;



    switch (selectmethod) {
        default: cout << "no such method";
    case 1:
        cout << "Enter size of array (Max size: " << MAX_SIZE << "):";

        cin >> sizeOfArrayC1;

        if (sizeOfArrayC1 > MAX_SIZE || sizeOfArrayC1 <= 0) {
            cout << "Array size is greater than max size!" << endl;
            return 1;
        }

        int arrayC12[MAX_SIZE];

        for (int i = 0; i < sizeOfArrayC1; i++) {
            cout << "Enter array el: " << i << ":  ";
            cin >> arrayC12[i];
        }


        ArrayCount(arrayC12);
        break;
    }

}


#endif //EXECUTIONFUNCTION_H
