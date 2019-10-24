#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

int main(int argc, char *argv[])
{
    std::string line = "              helloo";
    std::cout << std::endl << removeLeadingSpaces(line);
    std::cout << std::endl << line;

    std::string line2 = "vvvvvvvvvvgvvvvvvgvvvvg";
    std::cout << std::endl << countChar(line2,'v');
    return 0;
}
