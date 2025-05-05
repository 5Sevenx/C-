#ifndef SWAP_H
#define SWAP_H

inline void Swap(int &a, int &b) noexcept {

    cout << a << " " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;
}

inline void InitSwap() {
    int a,b;
    cout << "Enter number you want swap to:" << endl;
    cin >> a;
    cout << "Enter another number you want swap to:" << endl;
    cin >> b;
    Swap(a, b);
};
#endif
