#pragma once


#include <string>
#include <iostream>
#include <fstream>

using namespace std;


namespace ariel{

    class NumberWithUnits{
        private:
            double val;
            string unit;
        public:
            NumberWithUnits(double num, const char* type);
            ~NumberWithUnits(){}

            static void read_units(ifstream& file); 

            // unary operators
            friend NumberWithUnits operator-(const NumberWithUnits& a);
            friend NumberWithUnits operator+(const NumberWithUnits& a);
            
            // arithmetecs operators
            friend NumberWithUnits operator*(double mult, const NumberWithUnits& a);
            friend NumberWithUnits operator+(const NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits operator+=(const NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits operator-(const NumberWithUnits& a, const NumberWithUnits& b);
            friend NumberWithUnits operator-=(const NumberWithUnits& a, const NumberWithUnits& b);

            // prefix ( operator++() ) and postfix ( operator++(int) )
            friend NumberWithUnits operator++(const NumberWithUnits& a);
            friend NumberWithUnits operator++(const NumberWithUnits& a, int);
            friend NumberWithUnits operator--(const NumberWithUnits& a);
            friend NumberWithUnits operator--(const NumberWithUnits& a, int);


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