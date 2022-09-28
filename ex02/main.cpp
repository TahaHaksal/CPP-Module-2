#include "Fixed.hpp"

int main( void ) {
    Fixed b( 10 );
    Fixed d( b );
    if (d == b)
        std::cout << "yarraaa";
    return 0;
}