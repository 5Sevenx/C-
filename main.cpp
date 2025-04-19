#include "Head/C1/Factorial.h"
#include "Head/C1/Swap.h"
#include "Head/C1/ArrCnt.h"
#include "Head/C1/StrLen.h"


#include "Head/C2/ArrPtr.h"



#include <iostream>

using namespace std;


int main() {
   //--------------------------------------C1--------------------------------------
   // int ac1 = 5;
   // int bc1 = 10;
   // int arrc1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   //
   // ArrCount(arrc1);
   //
   // swap(ac1,bc1);
   //
   // FactMain();
   //
   // StrLen();
   //------------------------------------------------------------------------------

   int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   int *ptr = arr;

   int size = sizeof(arr) / sizeof(arr[0]);


   PtrArr(ptr,size);


   return 0;
}
