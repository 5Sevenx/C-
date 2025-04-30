#ifndef ArrCnt_h
#define ArrCnt_h

template<int N>

int ArrayCount(int (&arr)[N],int usedSize) {
    int sum = 0;

    for (int i = 0; i < usedSize; ++i) sum += arr[i];

    cout << sum << endl;

    return sum;
}


#endif