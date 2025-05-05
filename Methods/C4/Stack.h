#ifndef STACK_H
#define STACK_H

#include "Head/Class/StackT.h"
#include <algorithm>

#include "Service/stack_input.h"
#include "Service/touppercase.h"

inline int InitStack() {

    Stack<int> iS;
    Stack<string> sS;

    string typeOfStack;
    cout << "Enter type of stack(int or string):" << endl;
    cin >> typeOfStack;
    toUpperCase(typeOfStack);
    if (typeOfStack == "INT") {
        stackInputStackClass(iS);
        cout << "Top: " << iS.top() << endl;
        cout << "Deletind one element" << endl;
        iS.pop();
        cout << "Now top: " << iS.top() << endl;
        cout << "Size: " << iS.size() << endl;
        cout << "Is empty? " << (iS.empty() ? "Yes" : "No") << endl;
    }else if (typeOfStack == "STRING") {
        stackInputStackClass(sS);
        cout << "Top: " << sS.top() << endl;
        cout << "Deletind one element" << endl;
        sS.pop();
        cout << "Now top: " << sS.top() << endl;
        cout << "Size: " << sS.size() << endl;
        cout << "Is empty? " << (sS.empty() ? "Yes" : "No") << endl;
    }
    else {
        cerr << "Type of stack should be INT or STRING" << endl;
        return 1;
    }

    // s.push(10);
    // s.push(20);
    // cout << "Top: " << s.top() << endl;
    //
    // s.pop();
    // cout << "Now top: " << s.top() << endl;
    //
    // cout << "Size: " << s.size() << endl;
    // cout << "Is empty? " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}
#endif //STACK_H
