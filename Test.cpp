#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdexcept>

using namespace std;
using namespace ariel;

ifstream units_file{"units.txt"};

NumberWithUnits a{5,"m"};
NumberWithUnits b{1,"m"};
NumberWithUnits c{2,"km"};

const NumberWithUnits six_meter{6,"m"};
const NumberWithUnits seven_meter{7,"m"};
const NumberWithUnits five_meter{5,"m"};
const NumberWithUnits ten_meter{5,"m"};
const NumberWithUnits ten_kg{10,"kg"};
const NumberWithUnits fifty_ILS{50,"ILS"};
const NumberWithUnits twenty_sec{20,"sec"};

TEST_CASE("prefix&postfix ++, --")  //6 tests
{
    CHECK(a++ == five_meter);
    CHECK(a == six_meter);
    CHECK(++a == seven_meter);

    CHECK(a-- == seven_meter);
    CHECK(a == six_meter);
    CHECK(--a == five_meter);
}

TEST_CASE("basic arithmethecs between NumberWithUnits => +,-,*,+=,-=") //5 tests
{
    CHECK((a+b) == six_meter);
    CHECK((a-b) == five_meter);

    CHECK((a+=b) == six_meter);    
    CHECK((a-=b) == five_meter);

    CHECK(2*a == ten_meter);    
}

TEST_CASE("legal input - combine two types "){ //8 tests
    CHECK(a+c == NumberWithUnits{2.05,"km"});
    CHECK(a-c == NumberWithUnits{-1.95,"km"});

    CHECK(NumberWithUnits{30,"min"} + NumberWithUnits{30,"min"} == NumberWithUnits{1,"hour"});
    CHECK(NumberWithUnits{30,"sec"} + NumberWithUnits{30,"sec"} == NumberWithUnits{1,"min"});

    CHECK(NumberWithUnits{700,"g"} + NumberWithUnits{500,"g"} == NumberWithUnits{1.2,"kg"});
    CHECK(NumberWithUnits{2,"kg"} - NumberWithUnits{1.9,"kg"} == NumberWithUnits{10,"g"});
    CHECK(NumberWithUnits{500000,"g"} - NumberWithUnits{500,"kg"} == NumberWithUnits{1,"ton"});

    CHECK(NumberWithUnits{6.66,"ILS"} == NumberWithUnits{2,"USD"});
}

TEST_CASE("illigal input - combine two types "){ //6 tests
    CHECK_THROWS(seven_meter+ten_kg);
    CHECK_THROWS(seven_meter+fifty_ILS);
    CHECK_THROWS(seven_meter+twenty_sec);
    CHECK_THROWS(fifty_ILS+ten_kg);
    CHECK_THROWS(fifty_ILS+twenty_sec);
    CHECK_THROWS(twenty_sec+ten_kg);
}