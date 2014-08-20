#include "ObBit.hpp"




ObBitBase::ObBitBase()
{

}

void ObBitBase::on(unsigned char &number)
{
    unsigned char one = 1;
    number = one << 7;
}

void ObBitBase::on(unsigned short &number)
{
    unsigned short one = 1;
    number = one << 15;
}

void ObBitBase::on(unsigned long &number)
{
    unsigned long one = 1;
    number = one << 31;
}

void ObBitBase::on(unsigned long long &number)
{
    unsigned long long one = 1;
    number = one << 63;
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


bool ObBitBase::isOff(unsigned long &number, const unsigned short &index)
{
    return !ObBitBase::isOn(number,index);
}

bool ObBitBase::isOff(unsigned long long &number, const unsigned short &index)
{
    return !ObBitBase::isOn(number,index);
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


void ObBitBase::setRightMost(unsigned long &number)
{
    number |= (number+1);  // y = x | (x+1)
}


void ObBitBase::unsetRightMost(unsigned long &number)
{
    number &= (number-1);  // y = x & (x-1)
}


void ObBitBase::isolateRightMostOne(unsigned long &number)
{
    signed long n = signed long(number);
    number &= (-n);  // y = x & (-x)
}


void ObBitBase::isolateRightMostZero(unsigned long &number)
{
    number = ~number & (number+1);  // y = ~x & (x+1)
}
