/*
 * Library Name : ObBit (Object Bit)
 * Version : 1.0.0
 * Developer Name : KaWsEr
 * Developer Website : http://kawser.org
 * Developer Git : https://github.com/mkawserm
 *
 * Date : 19/08/2014
 * Time : 4:50 PM
 *
 * Objective : Simple Bit Manipulation Object
 *             The bit index is One based
 *             and it is counted from RIGHT To LEFT
 *
 */



#ifndef OBBIT
#define OBBIT

typedef unsigned char UBIT8;  // unsigned 8bit integer
typedef unsigned short UBIT16;  // unsigned 16bit integer
typedef unsigned long UBIT32;  // unsigned 32bit integer
typedef unsigned long long UBIT64;  // unsigned 64bit integer



template <typename T> class ObBit{

    private:
        T vOneZero;

    public:
        ObBit():
            vOneZero(0)
        {

        }

        void on()
        {
            this->vOneZero = -1;
        }

        void off()
        {
            this->vOneZero = 0;
        }

        bool isOn(const unsigned short &index)
        {
            T one = 1;
            if( this->vOneZero & one<<(index-1) ) return true;
            else return false;
        }

        bool isOff(const unsigned short &index)
        {
            return this->isOn(index);
        }

        void set(const unsigned short &index)
        {
            T one = 1;
            this->vOneZero |= one<<(index-1);  // y = x | (1<<n)
        }

        void unset(const unsigned short &index)
        {
            T one = 1;
            this->vOneZero &= ~(one<<(index-1));  // y = x & ~(1<<n)
        }

        void toggle(const unsigned short &index)
        {
            T one = 1;
            this->vOneZero ^= one<<(index-1); // y = x ^ (1<<n)
        }

        void setRightMost()
        {
            this->vOneZero |= (this->vOneZero+1);  // y = x | (x+1)
        }

        void unsetRightMost()
        {
            this->vOneZero &= (this->vOneZero-1);  // y = x & (x-1)
        }

        char * binary()
        {
            unsigned short length = sizeof(this->vOneZero)*8;
            char* bnumber = new char[length+1];

            T one = 1;
            T mask = one << (length-1);

            unsigned short i;
            for(i = 0; i<length; i++)
            {
               if( (this->vOneZero & mask)==0 ) bnumber[i] = '0';
               else bnumber[i] = '1';
               mask  >>= 1;
            }
            bnumber[i] = '\0';
            return bnumber;
        }


};




#endif // OBBIT
