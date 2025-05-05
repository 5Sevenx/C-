
#ifndef TOUPPERCASE_H
#define TOUPPERCASE_H
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

inline void toUpperCase(string& str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper);
}
#endif //TOUPPERCASE_H
