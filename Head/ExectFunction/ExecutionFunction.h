#ifndef EXECUTIONFUNCTION_H
#define EXECUTIONFUNCTION_H

#include <iostream>
#include <string>
#include <vector>

#include "Methods/C1/ArrayCount.h"
#include "Methods/C1/OwnStrLen.h"
#include "Methods/C2/DynamicArray.h"
#include "Methods/C3/ElementCounter.h"
#include "Methods/C1/Factorial.h"
#include "Methods/C1/Swap.h"
#include "Methods/C2/ArrayCopy.h"
#include "Methods/C2/PointerArray.h"
#include "Methods/C3/Struct.h"
#include "Methods/C4/SwapT&.h"


using namespace std;



inline void MainExecutionFunction() {

    int selectmethod;

    string methods[] = {
        "Array Count","Factorial","Own String length",
        "Swap","Array Copy","Dynamic Array",
        "Pointer Array", "Element counter","Struct","Swap T type"
    };

    cout << "Methods:" << endl;

    for (int i = 0; i < size(methods); i++) {
        cout << i + 1 << "." << methods[i] << endl;
    }
    cout << "Enter the method choice:";
    cin >> selectmethod;



    switch (selectmethod) {
        case 1: InitArrayCout(); break;
        case 2: InitFactorial(); break;
        case 3: InitOwnStrLen(); break;
        case 4: InitSwap(); break;
        case 5: InitArrayCopy(); break;
        case 6: InitDynamicArray(); break;
        case 7: InitPointerArray(); break;
        case 8: InitElementCounter(); break;
        case 9: InitCreateStudent(); break;
        case 10: SwapInit(); break;
        default: cout << "no such method"; break;
    }

}


#endif //EXECUTIONFUNCTION_H
