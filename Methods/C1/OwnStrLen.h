#ifndef StrLen_h
#define StrLen_h
#include <limits>
using namespace std;
#include <iostream>
int StringLength(const char* ch );


inline int InitOwnStrLen() {

    cout << "Enter a string, and I will output the number of characters contained therein: " ;

    //clean input before this method
    cin.ignore(numeric_limits<streamsize>::max(), '\n');


    char ch[50] = {} ;


    cin.getline( ch, sizeof(ch) );

    if (StringLength(ch) == 0){ cout << "Empty string "<< endl; return 1; }

    cout << cin.gcount() << " characters were extracted\n" ;

    const int len =  StringLength(ch) ;
    cout << "string length: " << len << '\n' ;

    return len;
}

inline int StringLength( const char* ch )
{
    int length = 0 ;
    if( ch != nullptr ) while( ch[length] != '\0' ) ++length ;

    return length ;
}

#endif