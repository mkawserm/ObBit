#include "ObBit.hpp"




ObBitBase::ObBitBase()
{

}

void ObBitBase::on(unsigned char &number)
{
    number = -1;
}

void ObBitBase::on(unsigned short &number)
{
    number = -1;
}

void ObBitBase::on(unsigned long &number)
{
    number = -1;
}

void ObBitBase::on(unsigned long long &number)
{
    number = -1;
}


void ObBitBase::off(unsigned char &number)
{
    number = 0;
}

void ObBitBase::off(unsigned short &number)
{
    number = 0;
}

void ObBitBase::off(unsigned long &number)
{
    number = 0;
}

void ObBitBase::off(unsigned long long &number)
{
    number = 0;
}


bool ObBitBase::isOn(unsigned char &number, const unsigned short &index)
{
    unsigned char one = 1;
    if( number & one<<(index-1) ) return true;
    else return false;
}

bool ObBitBase::isOn(unsigned short &number, const unsigned short &index)
{
    unsigned short one = 1;
    if( number & one<<(index-1) ) return true;
    else return false;
}

bool ObBitBase::isOn(unsigned long &number, const unsigned short &index)
{
    unsigned long one = 1;
    if( number & one<<(index-1) ) return true;
    else return false;
}


bool ObBitBase::isOn(unsigned long long &number, const unsigned short &index)
{
    unsigned long long one = 1;
    if( number & one<<(index-1) ) return true;
    else return false;
}


bool ObBitBase::isOff(unsigned char &number, const unsigned short &index)
{
    return !ObBitBase::isOn(number,index);
}

bool ObBitBase::isOff(unsigned short &number, const unsigned short &index)
{
    return !ObBitBase::isOn(number,index);
}

bool ObBitBase::isOff(unsigned long &number, const unsigned short &index)
{
    return !ObBitBase::isOn(number,index);
}

bool ObBitBase::isOff(unsigned long long &number, const unsigned short &index)
{
    return !ObBitBase::isOn(number,index);
}


void ObBitBase::set(unsigned char &number, const unsigned short &index)
{
    unsigned char one = 1;
    number |= one<<(index-1);  // y = x | (1<<n)
}

void ObBitBase::set(unsigned short &number, const unsigned short &index)
{
    unsigned short one = 1;
    number |= one<<(index-1);  // y = x | (1<<n)
}

void ObBitBase::set(unsigned long &number, const unsigned short &index)
{
    unsigned long one = 1;
    number |= one<<(index-1);  // y = x | (1<<n)
}

void ObBitBase::set(unsigned long long &number, const unsigned short &index)
{
    unsigned long long one = 1;
    number |= one<<(index-1);  // y = x | (1<<n)
}

void ObBitBase::unset(unsigned char &number, const unsigned short &index)
{
    unsigned char one = 1;
    number &= ~(one<<(index-1));  // y = x & ~(1<<n)
}

void ObBitBase::unset(unsigned short &number, const unsigned short &index)
{
    unsigned short one = 1;
    number &= ~(one<<(index-1));  // y = x & ~(1<<n)
}

void ObBitBase::unset(unsigned long &number, const unsigned short &index)
{
    unsigned long one = 1;
    number &= ~(one<<(index-1));  // y = x & ~(1<<n)
}

void ObBitBase::unset(unsigned long long &number, const unsigned short &index)
{
    unsigned long long one = 1;
    number &= ~(one<<(index-1));  // y = x & ~(1<<n)
}


void ObBitBase::toggle(unsigned char &number, const unsigned short &index)
{
    unsigned char one = 1;
    number ^= one<<(index-1); // y = x ^ (1<<n)
}

void ObBitBase::toggle(unsigned short &number, const unsigned short &index)
{
    unsigned short one = 1;
    number ^= one<<(index-1); // y = x ^ (1<<n)
}

void ObBitBase::toggle(unsigned long &number, const unsigned short &index)
{
    unsigned long one = 1;
    number ^= one<<(index-1); // y = x ^ (1<<n)
}

void ObBitBase::toggle(unsigned long long &number, const unsigned short &index)
{
    unsigned long long one = 1;
    number ^= one<<(index-1); // y = x ^ (1<<n)
}


void ObBitBase::setRightMost(unsigned char &number)
{
    number |= (number+1);  // y = x | (x+1)
}

void ObBitBase::setRightMost(unsigned short &number)
{
    number |= (number+1);  // y = x | (x+1)
}

void ObBitBase::setRightMost(unsigned long &number)
{
    number |= (number+1);  // y = x | (x+1)
}

void ObBitBase::setRightMost(unsigned long long &number)
{
    number |= (number+1);  // y = x | (x+1)
}


void ObBitBase::unsetRightMost(unsigned char &number)
{
    number &= (number-1);  // y = x & (x-1)
}

void ObBitBase::unsetRightMost(unsigned short &number)
{
    number &= (number-1);  // y = x & (x-1)
}

void ObBitBase::unsetRightMost(unsigned long &number)
{
    number &= (number-1);  // y = x & (x-1)
}

void ObBitBase::unsetRightMost(unsigned long long &number)
{
    number &= (number-1);  // y = x & (x-1)
}


char * ObBitBase::binary(unsigned char &number)
{
    unsigned short length = sizeof(number)*8;
    char* bnumber = new char[length+1];

    unsigned char one = 1;
    unsigned char mask = one << (length-1);

    unsigned short i;
    for(i = 0; i<length; i++)
    {
       if( (number & mask)==0 ) bnumber[i] = '0';
       else bnumber[i] = '1';
       mask  >>= 1;
    }
    bnumber[i] = '\0';
    return bnumber;
}

char * ObBitBase::binary(unsigned short &number)
{
    unsigned short length = sizeof(number)*8;
    char* bnumber = new char[length+1];

    unsigned short one = 1;
    unsigned short mask = one << (length-1);

    unsigned short i;
    for(i = 0; i<length; i++)
    {
       if( (number & mask)==0 ) bnumber[i] = '0';
       else bnumber[i] = '1';
       mask  >>= 1;
    }
    bnumber[i] = '\0';
    return bnumber;
}

char * ObBitBase::binary(unsigned long &number)
{
    unsigned short length = sizeof(number)*8;
    char* bnumber = new char[length+1];

    unsigned long one = 1;
    unsigned long mask = one << (length-1);

    unsigned short i;
    for(i = 0; i<length; i++)
    {
       if( (number & mask)==0 ) bnumber[i] = '0';
       else bnumber[i] = '1';
       mask  >>= 1;
    }
    bnumber[i] = '\0';
    return bnumber;
}


char * ObBitBase::binary(unsigned long long &number)
{
    unsigned short length = sizeof(number)*8;
    char* bnumber = new char[length+1];

    unsigned long long one = 1;
    unsigned long long mask = one << (length-1);

    unsigned short i;
    for(i = 0; i<length; i++)
    {
       if( (number & mask)==0 ) bnumber[i] = '0';
       else bnumber[i] = '1';
       mask  >>= 1;
    }
    bnumber[i] = '\0';
    return bnumber;
}


/*
template <typename T> ObBit<T>::ObBit():
    vOneZero(0)
{

}

template <typename T> char * ObBit<T>::binary()
{
    return ObBitBase::binary(this->vOneZero);
}
*/
