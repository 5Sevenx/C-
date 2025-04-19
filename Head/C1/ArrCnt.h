#ifndef ArrCnt_h
#define ArrCnt_h

template<size_t NumberEArray>
int ArrCount(int (&arr)[NumberEArray]) {
    int sum = 0;

    for (int i = 0; i < NumberEArray; ++i) sum += arr[i];

    return sum;
}

#endif