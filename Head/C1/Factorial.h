#ifndef Factorial_h
#define Factorial_h

#include <iostream>

using namespace std;

inline int Factorital() {
   int n;
   cout << "Enter a number to make a factorial:";
   cin >> n;
   int f = 1;

   if (n == 0) {
      cout << "The number must be greater than 0" << endl;
      return 1;
   }


   for (int i = n; i >= 1; --i) {
      cout << i;
      if (i > 1) cout << " x ";
      f *= i;
   }
   cout << " = " << f << endl;

   return 0;
}

#endif