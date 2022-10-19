#include "Point.hpp"

bool    bsp(Point a, Point b, Point c, Point const point)
{
    Fixed   Wa, Wb, Wc;
    Fixed   bx = b.getXVal() - a.getXVal();
    Fixed   by = b.getYVal() - a.getYVal();
    Fixed   cx = c.getXVal() - a.getXVal();
    Fixed   cy = c.getYVal() - a.getYVal();
    Fixed   x = point.getXVal() - a.getXVal();
    Fixed   y = point.getYVal() - a.getYVal();

    Fixed d = (bx * cy) - (cx * by);

    Wa = ( x * ( by - cy ) + y * ( cx - bx ) + bx * cy - cx * by) / d;
    Wb = ( x * cy - y * cx) / d;
    Wc = ( y * bx - x * by) / d;
    std::cout<<"Wb = "<<Wb.toFloat()<<","<<"Wc = "<<Wc<<","<<"wa = "<<Wa<<","<<std::endl;
    return ((Wa >= 0 && Wa <= 1) && (Wb >= 0 && Wb <= 1) && (Wc >= 0 && Wc <= 1));
}
