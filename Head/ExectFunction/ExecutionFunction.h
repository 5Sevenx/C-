#ifndef EXECUTIONFUNCTION_H
#define EXECUTIONFUNCTION_H

#include <iostream>
#include <string>
#include <vector>

#include "../C1/ArrayCount.h"


using namespace std;


typedef (*MethodArray)(int[]);
typedef (*MethodVoid)();
typedef (*MethodInt2)(int a,int b);


void IniciateExecution(int arr[],int selected) {


    int MethodN;


    int sizeOfArraya =  sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < sizeOfArraya; i++) {
        if(arr[i] == selected) {
            MethodN = arr[i];

            return;
        }
    }


}

int MainExecutionFunction() {

    MethodArray Method[]={
    ArrayCount,
    };

    string Methods[] ={'Array count','Factorial','Own String lenght','Swap Method'};



    return 0;
}


#endif //EXECUTIONFUNCTION_H
