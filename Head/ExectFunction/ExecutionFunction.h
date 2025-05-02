#ifndef EXECUTIONFUNCTION_H
#define EXECUTIONFUNCTION_H

#include <iostream>
#include <string>
#include <vector>

#include "Methods/C1/OwnStrLen.h"
#include "Methods/C2/DynamicArray.h"
#include "Methods/C3/ElementCounter.h"
#include "Methods/C1/Factorial.h"
#include "Methods/C4/SwapT&.h"
#include "SideMethods/Case1.h"
#include "SideMethods/Case4.h"
#include "SideMethods/Case5.h"
#include "SideMethods/Case7.h"
#include "SideMethods/Case9.h"

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
        case 1: Case1(); break;
        case 2: Factorital(); break;
        case 3: OwnStrLen(); break;
        case 4: Case4(); break;
        case 5: Case5(); break;
        case 6: DynamicArray(); break;
        case 7: Case7(); break;
        case 8: ElementeCtr(); break;
        case 9: Case9(); break;
        case 10: SwapInit(); break;
        default: cout << "no such method"; break;
    }

}


#endif //EXECUTIONFUNCTION_H
