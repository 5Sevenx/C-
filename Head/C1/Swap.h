#ifndef SWAP_H
#define SWAP_H

inline void Swap(int &a, int &b) noexcept {

    cout << a << " " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;
}
#endif
