
#ifndef CASE4_H
#define CASE4_H

#include<iostream>
using namespace std;
#include "../../C1/Swap.h"

inline void Case4() {
    int a,b;
    cout << "Enter number you want swap to:" << endl;
    cin >> a;
    cout << "Enter another number you want swap to:" << endl;
    cin >> b;
    Swap(a, b);
};
#endif //CASE4_H
