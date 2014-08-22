#include <iostream>
#include "ObBit.hpp"

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

    cout << "decimal:" << b8.decimal() << endl;


    cout << b8 << endl;

    cout <<endl<<"******************************************************************"<<endl<<endl;

    return 0;
}

