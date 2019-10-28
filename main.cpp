#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "funcs.h"

int main(int argc, char *argv[])
{
    std::string filename;
    std::cout <<"Enter the filename: ";
    std::cin>>filename;
    std::cout << format(filename);
    return 0;
}
