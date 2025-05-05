#ifndef ArrCnt_h
#define ArrCnt_h

template<int N>
int ArrayCount(int (&arr)[N],int usedSize) {
    int sum = 0;

    for (int i = 0; i < usedSize; ++i) sum += arr[i];

    cout << sum << endl;

    return sum;
}

const int MAX_SIZE_OF_ARRAY_ARRAYMETHOD = 100;

inline int InitArrayCout() {
    int ArrayC1[MAX_SIZE_OF_ARRAY_ARRAYMETHOD];
    int UsedSizeOfArrayC1;
    cout << "Enter the size of the array(Max:" << MAX_SIZE_OF_ARRAY_ARRAYMETHOD << ")"  << endl;
    cin >> UsedSizeOfArrayC1;

    if (UsedSizeOfArrayC1 > MAX_SIZE_OF_ARRAY_ARRAYMETHOD || UsedSizeOfArrayC1 < 1) {
        cout << "Invalid size of array" << endl;
        return 1;
    }

    for (int i = 0; i < UsedSizeOfArrayC1; i++) {
        cout << "Element " << i << ":";
        cin >> ArrayC1[i];
    }
    ArrayCount(ArrayC1, UsedSizeOfArrayC1);
    return 0;
}

#endif