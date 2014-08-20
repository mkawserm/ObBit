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


///////////////////////////////////////////////////////////////////////////////
/// \brief The ObBitBase class
///////////////////////////////////////////////////////////////////////////////
class ObBitBase{

    public:
        ObBitBase();

        ///////////////////////////////////////////////////////////////////////
        /// \brief on set all bit 1
        /// \param number 8bit/16bit/32bit/64bit signed/unsigned integer
        ///
        /// turn on all available bits
        ///////////////////////////////////////////////////////////////////////
        static void on(unsigned char &number);  // 8bit unsigned
        static void on(unsigned short &number);  // 16bit unsigned
        static void on(unsigned long &number);  // 32bit unsigned
        static void on(unsigned long long &number);  // 64bit unsigned


        ///////////////////////////////////////////////////////////////////////
        /// \brief off set all bit 0
        /// \param number 8bit/16bit/32bit/64bit signed/unsigned integer
        ///
        /// turn off all avialable bits
        ///////////////////////////////////////////////////////////////////////
        static void off(unsigned char &number);  // 8bit unsigned
        static void off(unsigned short &number);  // 16bit unsigned
        static void off(unsigned long &number);  // 32bit unsigned
        static void off(unsigned long long &number);  // 64bit unsigned


        ///////////////////////////////////////////////////////////////////////
        /// \brief isOn check if the bit is on
        /// \param number 8bit/16bit/32bit/64bit signed/unsigned integer
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
        /// \param number 8bit/16bit/32bit/64bit signed/unsigned integer
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
        /// \param number 8bit/16bit/32bit/64bit signed/unsigned integer
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
        /// \param number 8bit/16bit/32bit/64bit signed/unsigned integer
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
        /// \param number 8bit/16bit/32bit/64bit signed/unsigned integer
        /// \param index bit position
        ///////////////////////////////////////////////////////////////////////
        static void toggle(unsigned char &number, const unsigned short &index);
        static void toggle(unsigned short &number, const unsigned short &index);
        static void toggle(unsigned long &number, const unsigned short &index);
        static void toggle(unsigned long long &number, const unsigned short &index);


        ///////////////////////////////////////////////////////////////////////
        /// \brief setRightMost turn on the rightmost bit
        /// \param number 8bit/16bit/32bit/64bit signed/unsigned integer
        ///
        /// turn on the right most bit
        ///////////////////////////////////////////////////////////////////////
        static void setRightMost(unsigned char &number);
        static void setRightMost(unsigned short &number);
        static void setRightMost(unsigned long &number);
        static void setRightMost(unsigned long long &number);


        ///////////////////////////////////////////////////////////////////////
        /// \brief unsetRightMost turn off the rightmost bit
        /// \param number 32 bit integer
        ///
        /// turn off the right most bit
        ///////////////////////////////////////////////////////////////////////
        static void unsetRightMost(unsigned char &number);
        static void unsetRightMost(unsigned short &number);
        static void unsetRightMost(unsigned long &number);
        static void unsetRightMost(unsigned long long &number);


        ///////////////////////////////////////////////////////////////////////
        /// \brief isolateRightMostOne isolate the right most one bit
        /// \param number 32 bit integer
        ///
        /// protect the rightmost one bit and change other bits
        ///////////////////////////////////////////////////////////////////////
        static void isolateRightMostOne(unsigned char &number);
        static void isolateRightMostOne(unsigned short &number);
        static void isolateRightMostOne(unsigned long &number);
        static void isolateRightMostOne(unsigned long long &number);


        ///////////////////////////////////////////////////////////////////////
        /// \brief isolateRightMostZero
        /// \param number
        ///
        /// protect the rightmost zero bit and change other bits
        ///////////////////////////////////////////////////////////////////////
        static void isolateRightMostZero(unsigned char &number);
        static void isolateRightMostZero(unsigned short &number);
        static void isolateRightMostZero(unsigned long &number);
        static void isolateRightMostZero(unsigned long long &number);

};









#endif // OBBIT
