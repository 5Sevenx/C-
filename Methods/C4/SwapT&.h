#ifndef SWAPT_H
#define SWAPT_H
#include <iostream>
#include <string>
using namespace std;
template<class T>
void swap(T &a,T &b) noexcept {
    T aux(a);
    a=b;
    b=aux;
}

inline void SwapInit() {

    string a,b;
    cout << "Enter a string:" << endl;
    cin >> a;
    cout << "Enter a second string:" << endl;
    cin >> b;

    cout << a << " " << b << endl;

    swap(a,b);

    cout << a << " " << b << endl;
}


#endif
