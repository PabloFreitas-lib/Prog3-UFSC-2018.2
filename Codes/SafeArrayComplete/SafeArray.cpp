#include "SafeArray.hpp"

SafeArray::SafeArray(int array_size):size(array_size)
{
    try
    {
        ptr = new int[size];
    }
    catch(exception & e)
    {
        ptr = NULL;
        size = 0;
    }
    if(ptr!=NULL)
    {
        for(int i=0; i<size; i++)
        {
            ptr[i] = i;
        }
    }
}
SafeArray::SafeArray(const SafeArray & arrayToCopy): size(arrayToCopy.size)
{
    try
    {
        ptr = new int[size];
    }
    catch(exception & e)
    {
        ptr = NULL;
        size = 0;
    }
    if(ptr!=NULL)
    {
        for(int i=0; i<size; i++)
        {
            ptr[i] = arrayToCopy.ptr[i];
        }
    }
}
SafeArray::~SafeArray(void)
{
    delete [] ptr;
}

int SafeArray::getSize(void) const
{
    return size;
}

const SafeArray & SafeArray::operator=(const SafeArray & arrayToCopy)
{
    if(size == arrayToCopy.size)
    {
        for(int i=0; i<size; i++)
        {
            ptr[i] = arrayToCopy.ptr[i];
        }
    }
    return *this;
}
bool SafeArray::operator == (const SafeArray & arrayToCompare) const
{
    if(size != arrayToCompare.size)
    {
        return false;
    }
    for(int i=0; i<size; i++)
    {
        if(ptr[i] != arrayToCompare.ptr[i])
        {
            return false;
        }
    }

    return true;
}
bool SafeArray::operator != (const SafeArray & arrayToCompare) const
{
    return ! (*this == arrayToCompare);
}

const int & SafeArray::operator[](int i) const
{
    if((i > size)||(i < 0))
    {
        cout << "Index out of bounds" <<endl;
        return ptr[0];
    }
    return ptr[i];
}

ostream & operator <<(ostream & output, const SafeArray & myArray)
{
    output << "{";
    for(int i=0; i<myArray.size-1; i++)
    {
        output << myArray.ptr[i] << ", ";
    }
    output << myArray.ptr[myArray.size-1] << "}" << endl;
    return output;
}

istream & operator >>(istream & input, SafeArray & myArray)
{
    for(int i=0; i<myArray.size; i++)
    {
        input >> myArray.ptr[i];
    }
    return input;
}
