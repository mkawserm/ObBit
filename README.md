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
Include the ObBit header into your source code by \#include "ObBit.hpp"


Example for 8 bit
==================

ObBit<UBIT8> b8;
b8.on()  // turn on all bit
b8.off()  // turn off all bit
