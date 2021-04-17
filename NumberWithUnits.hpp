#pragma once

#include <map> 
#include <vector>
#include <string>

namespace ariel{

    class NumberWithUnits 
    {
        private:

        public:

            NumberWithUnits(int num, string unit);

            static void read_units(istream& file); 

            NumberWithUnits& operator>> (ostream& os);

    };
    // unary operators
    NumberWithUnits& operator-(const NumberWithUnits& num);
    NumberWithUnits& operator+(const NumberWithUnits& num);

    // arithmetecs operators
    NumberWithUnits& operator*(double mult, const NumberWithUnits& num);
    NumberWithUnits& operator+(const NumberWithUnits& a, const NumberWithUnits& b);
    NumberWithUnits& operator+=(const NumberWithUnits& a, const NumberWithUnits& b);
    NumberWithUnits& operator-(const NumberWithUnits& a, const NumberWithUnits& b);
    NumberWithUnits& operator-=(const NumberWithUnits& a, const NumberWithUnits& b);
    NumberWithUnits& operator++(const NumberWithUnits& num);
    NumberWithUnits& operator--(const NumberWithUnits& num);

    // compering operators
    bool& operator<(const NumberWithUnits& a, const NumberWithUnits& b);
    bool& operator<=(const NumberWithUnits& a, const NumberWithUnits& b);
    bool& operator>(const NumberWithUnits& a, const NumberWithUnits& b);
    bool& operator>=(const NumberWithUnits& a, const NumberWithUnits& b);
    bool& operator==(const NumberWithUnits& a, const NumberWithUnits& b);
    bool& operator!=(const NumberWithUnits& a, const NumberWithUnits& b);

    // ostream operators
    ostream& operator<< (ostream& out, const NumberWithUnits& num);
    istream& operator>> (istream& input, NumberWithUnits& num);

}