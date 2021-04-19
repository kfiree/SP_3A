#pragma once

#include <map> 
#include <vector>
#include <string>
#include <iostream>

using std::string;
using std::ifstream;

namespace ariel{

    class NumberWithUnits{
        private:
            double val;
            string unit;
        public:

            NumberWithUnits(double num, string unit){
                this->val = num;
                this->unit = unit;
            }
            ~NumberWithUnits(){}

            static void read_units(ifstream& file); 

            // unary operators
            friend NumberWithUnits& operator-(const NumberWithUnits& a);
            friend NumberWithUnits& operator+(const NumberWithUnits& a);


            // arithmetecs operators
            friend const NumberWithUnits& operator*(double mult, const NumberWithUnits& a);
            friend const NumberWithUnits& operator*(const NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits& operator+(NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits& operator+=(NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits& operator-(NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits& operator-=(NumberWithUnits& a, const NumberWithUnits& b);

            // prefix and postfix. => ++x  operator++(), x++  operator++(int)
            friend NumberWithUnits& operator++(NumberWithUnits& a);
            friend const NumberWithUnits operator++(NumberWithUnits& a, int);

            friend NumberWithUnits& operator--(NumberWithUnits& a);
            friend const NumberWithUnits operator--(NumberWithUnits& a, int);


            // compering operators
            friend bool operator<(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator<=(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator>(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator>=(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator==(const NumberWithUnits& a, const NumberWithUnits& b);
            friend bool operator!=(const NumberWithUnits& a, const NumberWithUnits& b);

                
            // ostream operators
            friend ostream& operator<< (ostream& out, const NumberWithUnits& num);
            friend istream& operator>> (istream& input, NumberWithUnits& num);

    };


}