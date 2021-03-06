ObBit
=====

ObBit is created to manipulate bitwise the 8/16/32/64 bit unsigned integer.

The motto of this library to save a single byte of memory if possible.

By using this library one can easily use a 8 bit integer to store 8 different states on a single byte rather than 8 bytes for boolean type.

ObBit index is One Based and counted right to left


Type Information
=================
unsigned 8 bit integer - UBIT8

unsigned 16 bit integer - UBIT16

unsigned 32 bit integer - UBIT32

unsigned 64 bit integer - UBIT64


Available Objects
=================

teplate class - ObBit



How To Use
================
Include the ObBit header into your source code by 

\#include "ObBit.hpp"


Example for 8 bit
==================


ObBit\<UBIT8\> b;

b.on();  // turn on all bit

b.off();  // turn off all bit

b.setRightMost();  // turn on the right most bit

b.unsetRightMost();  // turn off the right most bit

b.set(3);  // turn on the 3rd bit from right to left

b.unset(3);  // turn of the 3rd bit from right to left

b.toggle(3);  // toggle the 3rd bit from right to left

std::cout<< b.isOn(3) << endl;  //check if the 3rd bit is on

std::cout<< b.isOff(3) << endl;  //check if the 3rd bit is off

std::cout << b.binary() << endl;  // get the binary representation of the number

or std::cout << b << endl; // get the binary representation of the number

std::cout << b.decimal() << endl;  // get the decimal representation of the number


For 16 bit use - UBIT16

For 32 bit use - UBIT32

For 64 bit use - UBIT64
