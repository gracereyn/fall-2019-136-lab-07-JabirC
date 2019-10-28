
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"


TEST_CASE("removeLeadingSpaces"){
  CHECK(removeLeadingSpaces("") == "");
  CHECK(removeLeadingSpaces("  adfadf") == "adfadf");
  CHECK(removeLeadingSpaces("            ") == "");
  CHECK(removeLeadingSpaces(" 123") == "123");
}

TEST_CASE("countChar"){
  CHECK(countChar("asfadfadfadfadfasdf", 'a') == 6);
  CHECK(countChar("asfadfadfadfadfasdf", 'f') == 6);
  CHECK(countChar("a a a a ", ' ') == 4);
  CHECK(countChar("", 'a') == 0);
}

// 
// TEST_CASE("format"){
//   CHECK(format("funcs.h") ==
// }
