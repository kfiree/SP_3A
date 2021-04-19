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

TEST_CASE("prefix&postfix ++, --")
{
    NumberWithUnits a{5,"m"};
    NumberWithUnits aPlus{6,"m"};
    NumberWithUnits aMinus{4, "m"};

    CHECK(a++ == a);
    CHECK(a == NumberWithUnits{6,"m"});
    CHECK(++a == NumberWithUnits{7,"m"});

    CHECK(a-- == a);
    CHECK(a == NumberWithUnits{6,"m"});
    CHECK(++a == NumberWithUnits{7,"m"});
}