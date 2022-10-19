#include "Point.hpp"

int main( void ) {
    Point   a(1, 1);
    Point   b(2, 5);
    Point   c(5, 4);

    Point   point(4, 2);

    std::cout<<bsp(a,b,c,point)<<std::endl;
}
