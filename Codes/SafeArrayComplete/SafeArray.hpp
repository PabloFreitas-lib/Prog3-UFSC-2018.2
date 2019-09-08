#ifndef SAFEARRAY_HPP_INCLUDED
#define SAFEARRAY_HPP_INCLUDED

#include <iostream>
using namespace std;

class SafeArray;
ostream & operator<<(ostream &, const SafeArray & );
istream & operator>>(istream &, SafeArray & );

class SafeArray
{
    friend ostream &operator<<(ostream &, const SafeArray & );
    friend istream &operator>>(istream &, SafeArray & );
public:
    explicit SafeArray(int = 10 );
    SafeArray(const SafeArray & );
    ~SafeArray(void);

    int getSize(void) const;
    const SafeArray & operator=(const SafeArray & );
    bool operator == (const SafeArray & ) const;
    bool operator != (const SafeArray & ) const;
    const int & operator [](int) const;

private:
    int size;
    int * ptr;
};

#endif // SAFEARRAY_HPP_INCLUDED
