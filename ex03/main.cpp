#include "Point.hpp"

int main( void ) {
    Point   x;
    Point   y(2.5f, 2.5f);

    std::cout<<x.getXVal()<<std::endl<<x.getYVal()<<std::endl;
    std::cout<<y.getXVal()<<std::endl<<y.getYVal()<<std::endl;
}