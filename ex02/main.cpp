#include "Fixed.hpp"

int main( void ) {
    Fixed const b( Fixed( 4.2f ));

    std::cout<<b.getRawBits()<<std::endl;
    return 0;
}