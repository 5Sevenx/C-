#include "Head/C1/Factorial.h"
#include "Head/C1/Swap.h"
#include "Head/C1/ArrCnt.h"
#include "Head/C1/StrLen.h"


#include "Head/C2/ArrPtr.h"
#include "Head/C2/DynArr.h"


#include <iostream>

#include "Head/C2/CpArrPtr.h"


using namespace std;


int main() {
   //--------------------------------------C1--------------------------------------
   // int ac1 = 5;
   // int bc1 = 10;
   // int arrc1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   //
   // ArrayCount(arrc1);
   //
   // Swao(ac1,bc1);
   //
   // Factorital();
   //
   // OwnStrLen();
   //------------------------------------------------------------------------------

    int arrc2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int size = sizeof(arrc2) / sizeof(arrc2[0]);

    int *newArrc2 = new int[size];
   //
   // int *ptr = arrc2;

   //
   // PointerArray(ptr,size);

   // DynamicArray();

   ArrayCopy(arrc2, newArrc2, size);

   return 0;
}
