#ifndef Factorial_h
#define Factorial_h

#include <iostream>

using namespace std;

inline void Factorital(int n) {
   int f = 1;

   if (n == 0) {
      cout << "The number must be greater than 0" << endl;
      return;
   }


   for (int i = n; i >= 1; --i) {
      cout << i;
      if (i > 1) cout << " x ";
      f *= i;
   }
   cout << " = " << f << endl;

}

inline void InitFactorial() {
   int n;
   cout << "Enter a number to make a factorial:";
   cin >> n;
   Factorital(n);

}

#endif