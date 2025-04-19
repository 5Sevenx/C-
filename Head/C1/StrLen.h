#ifndef StrLen_h
#define StrLen_h

int StringLength( const char* ch );


inline int StrLen() {

    cout << "Enter a string, and I will output the number of characters contained therein.\n" ;

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