
#include <stack>

#include "Head/ExectFunction/ExecutionFunction.h"
#include "Methods/C4/ExceptionStak.h"
#include "Methods/C4/SwapT&.h"
using namespace std;


int main() {

   // MainExecutionFunction();

   stack<int> s;
   s.push(1);
   s.push(2);
   s.push(3);
   ExceptionStak(s);
   return 0;
}
