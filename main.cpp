#include <iostream>
#include "ObBit.hpp"

using namespace std;



void Convert(unsigned int val)
{
   unsigned int mask = 1 << (sizeof(int) * 8 - 1);

   for(int i = 0; i < sizeof(int) * 8; i++)
   {
      if( (val & mask) == 0 )
         cout << '0' ;
      else
         cout << '1' ;

      mask  >>= 1;
   }
   cout << endl ;
}




int main()
{
    /*
    unsigned char a;
    unsigned short int a1;
    unsigned int a2;
    unsigned long int a3;
    unsigned long long int a4;

    a = char(1<<8);

    cout << sizeof a << endl;
    cout << sizeof a1 << endl;
    cout << sizeof a2 << endl;
    cout << sizeof a3 << endl;
    cout << sizeof a4 << endl;
    cout << sizeof (1<<8) << endl;

    cout << a;

    ObBit b;

    unsigned short k = -1;
    cout<<k<<endl;


    cout << b.getBitSet() << endl;
    cout << b.isOn(32) << endl;
    cout << b.isOff(32) << endl;

    cout << "Setting 32 no Bit" << endl;
    b.set(32);
    cout << b.isOn(32) << endl;
    cout << b.getBitSet() << endl;

    cout << "Clearing 32 no Bit" << endl;
    b.unset(32);
    cout << b.isOn(32) << endl;
    cout << b.getBitSet() << endl;


    cout << "Toggle 32 no bit" << endl;
    b.toggle(-1);
    cout << b.isOn(-1) << endl;
    cout << b.getBitSet() << endl;

    cout << "Toggle 32 no bit" << endl;
    b.toggle(-1);
    cout << b.isOn(-1) << endl;

    cout << endl << "64 Bit"<<endl;

    ObBit64 b64;

    cout << b64.isOn(1) << endl;
    b64.set(1);
    cout << b64.isOn(1) << endl;

    cout << b64.getBitSet() << endl;
*/
    //unsigned long a = 0;
    //ObBitBase::on(a);
    //ObBitBase::set(a,1);
    //cout << a<<endl;
    //for(unsigned int i = 1; i < 2; i++)
    //Convert(a);

    unsigned char a1 = 83;
    unsigned short a2 = 83;
    unsigned long a3 = 83;
    unsigned long long a4 = 83;
    ObBitBase::on(a4);

    cout << ObBitBase::binary(a1) << endl;
    cout << ObBitBase::binary(a2) << endl;
    cout << ObBitBase::binary(a3) << endl;
    cout << ObBitBase::binary(a4) << endl;
    return 0;
}

