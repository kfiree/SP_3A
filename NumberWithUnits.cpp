#include "NumberWithUnits.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <string>

using namespace ariel;
using namespace std;

namespace ariel
{
            NumberWithUnits::NumberWithUnits(double num, const char* type){
                this->val=num;
                this->unit=type;
            }
            
            void ariel::NumberWithUnits::read_units(ifstream& file){

            }

            /** 
                //////////////////////////////////
                ///// operator overloading ///////
                //////////////////////////////////
            **/

            // unary operators
            NumberWithUnits operator-(const NumberWithUnits& a){
                return a;
            }

            NumberWithUnits operator+(const NumberWithUnits& a){
                return a;
            }


            // arithmetecs operators
            NumberWithUnits operator*(double mult, const NumberWithUnits& a){
                return a;
            }
            
            NumberWithUnits operator*(const NumberWithUnits& b, const NumberWithUnits& a){
                return a;
            }

            NumberWithUnits operator+(const NumberWithUnits& a, const NumberWithUnits& b){
                return a;
            }
            NumberWithUnits operator+=(const NumberWithUnits& a, const NumberWithUnits& b){
                return a;
            }

            NumberWithUnits operator-(const NumberWithUnits& a, const NumberWithUnits& b){
                return a;
            }

            NumberWithUnits operator-=(const NumberWithUnits& a, const NumberWithUnits& b){
                return a;
            }

            NumberWithUnits operator++(const NumberWithUnits& a){
                return a;
            }

            NumberWithUnits operator++(const NumberWithUnits& a, int){
                return a;
            }

            NumberWithUnits operator--(const NumberWithUnits& a, int){
                return a;
            }

            NumberWithUnits operator--(const NumberWithUnits& a){
                return a;
            }


            // compering operators
            bool operator<(const NumberWithUnits& a, const NumberWithUnits& b){
                return true;
            }
            bool operator<=(const NumberWithUnits& a, const NumberWithUnits& b){
                return true;
            }
            bool operator>(const NumberWithUnits& a, const NumberWithUnits& b){
                return true;
            }
            bool operator>=(const NumberWithUnits& a, const NumberWithUnits& b){
                return true;
            }
            bool operator==(const NumberWithUnits& a, const NumberWithUnits& b){
                return true;
            }
            bool operator!=(const NumberWithUnits& a, const NumberWithUnits& b){
                return true;
            }


            // ostream operators
            ostream& operator<< (ostream& out, const NumberWithUnits& num){ 
                return out;
            }
            istream& operator>> (istream& input, NumberWithUnits& num){
                return input;
            }

}