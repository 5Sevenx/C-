#ifndef ArrCnt_h
#define ArrCnt_h

template<int NumberEArray>
int ArrayCount(int (&arr)[NumberEArray]) {
    int sum = 0;

    for (int i = 0; i < NumberEArray; ++i) sum += arr[i];

    cout << sum << endl;

    return sum;
}

#endif