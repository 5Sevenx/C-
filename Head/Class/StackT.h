#ifndef STRACKT_H
#define STRACKT_H

#include <vector>
#include <stdexcept>
#include <iostream>
using namespace std;
template <typename T>
class Stack {
    vector<T> d;

    public:
    void push(const T& value) {
        d.push_back(value);
    }

    void pop() {
        if (d.empty()) throw out_of_range("Stack is empty");
        d.pop_back();
    }

    T& top() {
        if (d.empty()) throw out_of_range("Stack is empty");
        return d.back();
    }

    bool empty() const {
        return d.empty();
    }

    size_t size() const {
        return d.size();
    }
};




#endif
