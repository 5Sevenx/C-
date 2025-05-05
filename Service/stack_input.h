#ifndef STACK_INPUT_H
#define STACK_INPUT_H

#include <iostream>
#include <stack>
#include <string>
#include <type_traits>
using namespace std;

template <typename T>

void stackInput(stack<T> &a) {

    int stackrange;
    cout << "Enter stack length:" << endl;
    cin >> stackrange;

    if constexpr (is_same<T, int>::value) {
        int numint;
        for (int i = 0; i < stackrange; i++) {
            cout << "Enter stack number " << i + 1 << ": ";
            cin >> numint;
            a.push(numint);
        }
    }

    else if constexpr (is_same<T, string>::value) {
        string numstr;
        for (int i = 0; i < stackrange; i++) {
            cout << "Enter stack string " << i + 1 << ": ";
            cin >> numstr;
            a.push(numstr);
        }
    }
}

template <typename T>
void stackInputStackClass(Stack<T> &a) {

    int stackrange;
    cout << "Enter stack length:" << endl;
    cin >> stackrange;

    if constexpr (is_same<T, int>::value) {
        int numint;
        for (int i = 0; i < stackrange; i++) {
            cout << "Enter stack number " << i + 1 << ": ";
            cin >> numint;
            a.push(numint);
        }
    }

    else if constexpr (is_same<T, string>::value) {
        string numstr;
        for (int i = 0; i < stackrange; i++) {
            cout << "Enter stack number " << i + 1 << ": ";
            cin >> numstr;
            a.push(numstr);
        }
    }
}
#endif // STACK_INPUT_H
