#include "Fixed.hpp"

int main( void ) {
    Fixed a(5.25f);
    Fixed b(5.6f);
    int x = (a + b).toInt();
    std::cout<< x << std::endl;
    return 0;
}