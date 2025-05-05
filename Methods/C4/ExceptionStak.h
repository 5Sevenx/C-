
#ifndef EXCEPTIONSTAK_H
#define EXCEPTIONSTAK_H
#include <iostream>
#include <ostream>

#include <stack>
using namespace std;
template <class T>


void ExceptionStak(stack<T>& s) {
    try {
        cout << s.top() << endl;
    }
    catch (const exception& e) {
        cout << "Exeption: " << e.what() << endl;
    };
};

template <typename T>
void InitExceptionStak(stack<T>& s) {

    int choise;
    cout << "Initialize stack,select type of data for stack: "<< endl << "1.Int"
    << endl << "2.String" << endl;
    cin >> choise;

    if ( choise == 1 ) {
        int numint;
        int stackrange;
        cout << "Enter stack length:" << endl;
        cin >> stackrange;

        for (int i = 0; i < stackrange; i++) {
            cout << "Enter stack number " << i + 1 << ": ";
            cin >> numint;
            s.push(numint);
        }
    }else if ( choise == 2 ) {
        string numint;
        int stackrange;
        cout << "Enter stack length:" << endl;
        cin >> stackrange;

        for (int i = 0; i < stackrange; i++) {
            cout << "Enter stack number " << i + 1 << ": ";
            cin >> numint;
            s.push(numint);
        }
    }else {
        cout << "Invalid choice." << endl;
        return;
    }

    cout << "Exeption stak initialized." << endl;

    ExceptionStak(s);

};

#endif //EXCEPTIONSTAK_H
