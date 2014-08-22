/*
 * Library Name : ObBit (Object Bit)
 * Version : 1.0.1
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

#include <iostream>

typedef unsigned char UBIT8;  // unsigned 8bit integer
typedef unsigned short UBIT16;  // unsigned 16bit integer
typedef unsigned long UBIT32;  // unsigned 32bit integer
typedef unsigned long long UBIT64;  // unsigned 64bit integer

typedef UBIT8 BIT8;
typedef UBIT16 BIT16;
typedef UBIT32 BIT32;
typedef UBIT64 BIT64;


template <typename T> class ObBit{

    private:
        T vOneZero;

    public:
        ObBit():
            vOneZero(0)
        {

        }

        ///////////////////////////////////////////////////////////////////////
        /// \brief on set all bit 1
        ///
        /// turn on all bits
        ///////////////////////////////////////////////////////////////////////
        void on()
        {
            this->vOneZero = -1;
        }

        ///////////////////////////////////////////////////////////////////////
        /// \brief off set all bit 0
        ///
        /// turn off all bits
        ///////////////////////////////////////////////////////////////////////
        void off()
        {
            this->vOneZero = 0;
        }


        ///////////////////////////////////////////////////////////////////////
        /// \brief isOn check if the bit is on
        /// \param index bit position
        /// \return true or false
        ///
        /// check if the bit is on at specified position
        ///////////////////////////////////////////////////////////////////////
        bool isOn(const unsigned short &index)
        {
            T one = 1;
            if( this->vOneZero & one<<(index-1) ) return true;
            else return false;
        }


        ///////////////////////////////////////////////////////////////////////
        /// \brief isOff check if the bit is off
        /// \param index bit position
        /// \return true or false
        ///
        /// check if the bit is off at specified position
        ///////////////////////////////////////////////////////////////////////
        bool isOff(const unsigned short &index)
        {
            return !this->isOn(index);
        }


        ///////////////////////////////////////////////////////////////////////
        /// \brief set turn on bit
        /// \param index bit position
        ///
        /// turn on bit at specified position
        ///////////////////////////////////////////////////////////////////////
        void set(const unsigned short &index)
        {
            T one = 1;
            this->vOneZero |= one<<(index-1);  // y = x | (1<<n)
        }


        ///////////////////////////////////////////////////////////////////////
        /// \brief unset turn off bit
        /// \param index bit position
        ///
        /// turn off bit at specified position
        ///////////////////////////////////////////////////////////////////////
        void unset(const unsigned short &index)
        {
            T one = 1;
            this->vOneZero &= ~(one<<(index-1));  // y = x & ~(1<<n)
        }


        ///////////////////////////////////////////////////////////////////////
        /// \brief toggle toggle bitween on and off
        /// \param index bit position
        ///////////////////////////////////////////////////////////////////////
        void toggle(const unsigned short &index)
        {
            T one = 1;
            this->vOneZero ^= one<<(index-1); // y = x ^ (1<<n)
        }


        ///////////////////////////////////////////////////////////////////////
        /// \brief setRightMost turn on the rightmost bit
        ///
        /// turn on the right most bit
        ///////////////////////////////////////////////////////////////////////
        void setRightMost()
        {
            this->vOneZero |= (this->vOneZero+1);  // y = x | (x+1)
        }


        ///////////////////////////////////////////////////////////////////////
        /// \brief unsetRightMost turn off the rightmost bit
        ///
        /// turn off the right most bit
        ///////////////////////////////////////////////////////////////////////
        void unsetRightMost()
        {
            this->vOneZero &= (this->vOneZero-1);  // y = x & (x-1)
        }

        ///////////////////////////////////////////////////////////////////////
        /// \brief binary convert decimal number to binay
        /// \return char pointer (string)
        ///
        /// convert decimal number to binary using bitwise operaion
        ///////////////////////////////////////////////////////////////////////
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


        ///////////////////////////////////////////////////////////////////////
        /// \brief decimal decimal representation of the number
        /// \return unsigned long long integer
        ///
        /// get the decimal representation of the number
        ///////////////////////////////////////////////////////////////////////
        UBIT64 decimal()
        {
            return UBIT64(this->vOneZero);
        }


        ///////////////////////////////////////////////////////////////////////
        /// \brief operator <<
        /// \param output
        /// \param ob
        /// \return ostream
        ///
        /// overloaded << operator to print in binary format
        ///////////////////////////////////////////////////////////////////////
        friend std::ostream &operator<<(std::ostream &output,ObBit<T> &ob)
        {
            output << ob.binary();
            return output;
        }


};




#endif // OBBIT
