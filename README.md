ObBit
=====

ObBit is created to manipulate the 8/16/32/64 bit unsigned integer by bitwise. The motto of this library to save a single byte of memory if possible. By using this library one can easily use a 8 bit integer to store 8 different states on a single byte rather than 8 bytes for boolean type. ObBit index is One Based.


Type Information
=================
unsigned 8 bit integer - UBIT8

unsigned 16 bit integer - UBIT16

unsigned 32 bit integer - UBIT32

unsigned 64 bit integer - UBIT64


Available Objects
=================
class - ObBitBase

teplate class - ObBit



How To Use
================

\#include \<iostream\>

\#include "ObBit.hpp"

using namespace std;

int main()

{
    cout << "8 BIT ObBit Example" << endl;

    ObBit<UBIT8> b8;

    cout <<endl;

    b8.on();
    cout<< "on:" << b8.binary() << endl;

    b8.off();
    cout<< "off:" << b8.binary() << endl;

    b8.setRightMost();
    cout<< "setRightMost:" << b8.binary() << endl;

    b8.unsetRightMost();
    cout<< "unsetRightMost:" << b8.binary() << endl;

    b8.set(8);
    cout<< "set(8):" << b8.binary() << endl;

    b8.set(5);
    cout<< "set(5):" << b8.binary() << endl;

    b8.unset(8);
    cout<< "unset(8):" << b8.binary() << endl;

    b8.unset(5);
    cout<< "unset(5):" << b8.binary() << endl;

    b8.toggle(3);
    cout<< "toggle(3):" << b8.binary() << endl;

    cout<< "isOn(3):" << b8.isOn(3) << endl;
    cout<< "isOff(3):" << b8.isOff(3) << endl;

    cout <<endl<<"******************************************************************"<<endl<<endl;

    return 0;
}
