#ifndef ArrCnt_h
#define ArrCnt_h

template<int NumberEArray>
// TODO: Change properties: pass array size directly to avoid issues.
int ArrayCount(int (&arr)[NumberEArray]) {
    int sum = 0;

    for (int i = 0; i < NumberEArray; ++i) sum += arr[i];

    cout << sum << endl;

    return sum;
}


#endif