#ifndef SWAP_H
#define SWAP_H

inline void swap(int &a, int &b) noexcept {
    int temp = a;
    a = b;
    b = temp;
}
#endif
