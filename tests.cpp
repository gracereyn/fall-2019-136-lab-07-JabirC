
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"


TEST_CASE("shiftChar"){
  CHECK(shiftChar('W',5) == 'B');
  CHECK(shiftChar('A',10) == 'K');
  CHECK(shiftChar('C',4) == 'G');
  CHECK(shiftChar('Z',1) == 'A');
  CHECK(shiftChar('A',26) == 'A');
}
