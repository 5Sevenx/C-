
#ifndef EXCEPTIONSTAK_H
#define EXCEPTIONSTAK_H
#include <iostream>
#include <ostream>

#include <stack>

#include "Service/stack_input.h"
using namespace std;
template <typename T>


void ExceptionStak(stack<T>& s) {
    try {
        cout << s.top() << endl;
    }
    catch (const exception& e) {
        cout << "Exeption: " << e.what() << endl;
    };
};


inline void InitExceptionStak() {

    stack<int> iS;
    stack<string> sS;

    int choise;
    cout << "Initialize stack,select type of data for stack: "<< endl << "1.Int"
    << endl << "2.String" << endl;
    cin >> choise;

    if ( choise == 1 ) {
        stackInput(iS);
        cout << "Exeption stak initialized." << endl;

        ExceptionStak(iS);
    }else if ( choise == 2 ) {
        stackInput(sS);
        cout << "Exeption stak initialized." << endl;

        ExceptionStak(sS);
    }else {
        cout << "Invalid choice." << endl;
        return;
    }



};

#endif //EXCEPTIONSTAK_H
