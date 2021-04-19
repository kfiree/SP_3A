#include "NumberWithUnits.hpp"
#include <iostream>

using namespace std;

namespace ariel
{
    void NumberWithUnits::read_units(ifstream& file){

    }


            // unary operators
            NumberWithUnits& operator-(NumberWithUnits a){
                return a;
            }

            NumberWithUnits& operator+(NumberWithUnits a){
                return  a;
            }


            // arithmetecs operators
            const NumberWithUnits& operator*(double mult, const NumberWithUnits& a){
                return a;
            }
            
            const NumberWithUnits& operator*(const NumberWithUnits& b, const NumberWithUnits& a){
                return a;
            }

            NumberWithUnits& operator+(NumberWithUnits& a, const NumberWithUnits& b){
                return a;
            }
            NumberWithUnits& operator+=(NumberWithUnits& a, const NumberWithUnits& b){
                return a;
            }

            NumberWithUnits& operator-(NumberWithUnits& a, const NumberWithUnits& b){
                return a;
            }

            NumberWithUnits& operator-=(NumberWithUnits& a, const NumberWithUnits& b){
                return a;
            }

            NumberWithUnits& operator++(NumberWithUnits& a){
                return a;
            }

            const NumberWithUnits operator--(NumberWithUnits& a, int){
                return a;
            }

            NumberWithUnits& operator--(NumberWithUnits& a){
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
            istream& operator>> (istream& input, const NumberWithUnits& num){
                return input;
            }

}