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

///////////////////////////////////////////////////////////////////////////////
/// \brief The ObBitBase class
///////////////////////////////////////////////////////////////////////////////
class ObBitBase{

    public:
        ObBitBase();

        ///////////////////////////////////////////////////////////////////////
        /// \brief on set all bit 1
        /// \param number 8bit/16bit/32bit/64bit unsigned integer
        ///
        /// turn on all available bits
        ///////////////////////////////////////////////////////////////////////
        static void on(unsigned char &number);  // 8bit unsigned
        static void on(unsigned short &number);  // 16bit unsigned
        static void on(unsigned long &number);  // 32bit unsigned
        static void on(unsigned long long &number);  // 64bit unsigned


        ///////////////////////////////////////////////////////////////////////
        /// \brief off set all bit 0
        /// \param number 8bit/16bit/32bit/64bit unsigned integer
        ///
        /// turn off all avialable bits
        ///////////////////////////////////////////////////////////////////////
        static void off(unsigned char &number);  // 8bit unsigned
        static void off(unsigned short &number);  // 16bit unsigned
        static void off(unsigned long &number);  // 32bit unsigned
        static void off(unsigned long long &number);  // 64bit unsigned


        ///////////////////////////////////////////////////////////////////////
        /// \brief isOn check if the bit is on
        /// \param number 8bit/16bit/32bit/64bit unsigned integer
        /// \param index bit position
        /// \return true or false
        ///
        /// check if the bit is on at specified position
        ///////////////////////////////////////////////////////////////////////
        static bool isOn(unsigned char &number, const unsigned short &index);
        static bool isOn(unsigned short &number, const unsigned short &index);
        static bool isOn(unsigned long &number, const unsigned short &index);
        static bool isOn(unsigned long long &number, const unsigned short &index);


        ///////////////////////////////////////////////////////////////////////
        /// \brief isOff check if the bit is off
        /// \param number 8bit/16bit/32bit/64bit unsigned integer
        /// \param index bit position
        /// \return true or false
        ///
        /// check if the bit is off at specified position
        ///////////////////////////////////////////////////////////////////////
        static bool isOff(unsigned char &number, const unsigned short &index);
        static bool isOff(unsigned short &number, const unsigned short &index);
        static bool isOff(unsigned long &number, const unsigned short &index);
        static bool isOff(unsigned long long &number, const unsigned short &index);


        ///////////////////////////////////////////////////////////////////////
        /// \brief set turn on bit
        /// \param number 8bit/16bit/32bit/64bit unsigned integer
        /// \param index bit position
        ///
        /// turn on bit at specified position
        ///////////////////////////////////////////////////////////////////////
        static void set(unsigned char &number, const unsigned short &index);
        static void set(unsigned short &number, const unsigned short &index);
        static void set(unsigned long &number, const unsigned short &index);
        static void set(unsigned long long &number, const unsigned short &index);


        ///////////////////////////////////////////////////////////////////////
        /// \brief unset turn off bit
        /// \param number 8bit/16bit/32bit/64bit unsigned integer
        /// \param index bit position
        ///
        /// turn off bit at specified position
        ///////////////////////////////////////////////////////////////////////
        static void unset(unsigned char &number, const unsigned short &index);
        static void unset(unsigned short &number, const unsigned short &index);
        static void unset(unsigned long &number, const unsigned short &index);
        static void unset(unsigned long long &number, const unsigned short &index);


        ///////////////////////////////////////////////////////////////////////
        /// \brief toggle toggle bitween on and off
        /// \param number 8bit/16bit/32bit/64bit unsigned integer
        /// \param index bit position
        ///////////////////////////////////////////////////////////////////////
        static void toggle(unsigned char &number, const unsigned short &index);
        static void toggle(unsigned short &number, const unsigned short &index);
        static void toggle(unsigned long &number, const unsigned short &index);
        static void toggle(unsigned long long &number, const unsigned short &index);


        ///////////////////////////////////////////////////////////////////////
        /// \brief setRightMost turn on the rightmost bit
        /// \param number 8bit/16bit/32bit/64bit unsigned integer
        ///
        /// turn on the right most bit
        ///////////////////////////////////////////////////////////////////////
        static void setRightMost(unsigned char &number);
        static void setRightMost(unsigned short &number);
        static void setRightMost(unsigned long &number);
        static void setRightMost(unsigned long long &number);


        ///////////////////////////////////////////////////////////////////////
        /// \brief unsetRightMost turn off the rightmost bit
        /// \param number 8bit/16bit/32bit/64bit unsigned integer
        ///
        /// turn off the right most bit
        ///////////////////////////////////////////////////////////////////////
        static void unsetRightMost(unsigned char &number);
        static void unsetRightMost(unsigned short &number);
        static void unsetRightMost(unsigned long &number);
        static void unsetRightMost(unsigned long long &number);


        ///////////////////////////////////////////////////////////////////////
        /// \brief binary convert decimal number to binay
        /// \param number 8bit/16bit/32bit/64bit unsigned integer
        /// \return char pointer (string)
        ///
        /// convert decimal number to binary using bitwise operaion
        ///////////////////////////////////////////////////////////////////////
        static char * binary(unsigned char &number);
        static char * binary(unsigned short &number);
        static char * binary(unsigned long &number);
        static char * binary(unsigned long long &number);
};




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
            ObBitBase::on(this->vOneZero);
        }

        void off()
        {
            ObBitBase::off(this->vOneZero);
        }

        bool isOn(const unsigned short &index)
        {
            return ObBitBase::isOn(this->vOneZero,index);
        }

        bool isOff(const unsigned short &index)
        {
            return ObBitBase::isOff(this->vOneZero,index);
        }

        void set(const unsigned short &index)
        {
            ObBitBase::set(this->vOneZero,index);
        }

        void unset(const unsigned short &index)
        {
            ObBitBase::unset(this->vOneZero,index);
        }

        void toggle(const unsigned short &index)
        {
            ObBitBase::toggle(this->vOneZero,index);
        }

        void setRightMost()
        {
            ObBitBase::setRightMost(this->vOneZero);
        }

        void unsetRightMost()
        {
            ObBitBase::unsetRightMost(this->vOneZero);
        }

        char * binary()
        {
            return ObBitBase::binary(this->vOneZero);
        }


};




#endif // OBBIT
