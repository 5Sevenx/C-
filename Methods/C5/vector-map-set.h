#ifndef VECTOR_MAP_SET_H
#define VECTOR_MAP_SET_H
#include <iostream>
#include <vector>
using namespace std;

// Comparator function
inline bool comp(int a, int b) {
    return a > b;
}

inline int InitVector() {
    vector<int >NumberVector;

    int NumberOfElement;

    cout << "Enter number of elements: ";

    cin >> NumberOfElement;


    cout << "Enter elements: " << endl;

    for (int i = 0; i < NumberOfElement; i++) {
        int val;
        cout << "Element " << i+1 << ": ";
        cin >> val;
        NumberVector.push_back(val);
    }

    cout << "Vector size: " << NumberVector.size() << endl;

    string SelectedOrder;
    cout << "Select type of you want(des or asc): " << endl;
    cin >> SelectedOrder;
    toUpperCase(SelectedOrder);
    if (SelectedOrder == "DES") {
        sort(NumberVector.begin(), NumberVector.end(), comp);
        for (int i : NumberVector) {
            cout << i << " ";
        }
    }else if (SelectedOrder == "ASC") {
        sort(NumberVector.begin(), NumberVector.end());
        for (int i : NumberVector) {
            cout << i << " ";
        }
    }
    else {
        cerr << "Wrong input" << endl;
        return 1;
    }
    return 0;
};

#endif
