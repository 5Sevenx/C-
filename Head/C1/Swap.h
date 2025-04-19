#ifndef SWAP_H
#define SWAP_H

inline void Swao(int &a, int &b) noexcept {
    int temp = a;
    a = b;
    b = temp;
}
#endif
