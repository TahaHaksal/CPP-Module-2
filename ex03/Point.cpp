#include "Point.hpp"

// Constructors
Point::Point() : _x(0), _y(0)
{
}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y)
{
}

Point::Point (const float x_val, const float y_val) :_x(x_val), _y(y_val)
{
	
}

// Destructor
Point::~Point()
{
}


// Operators
Point & Point::operator=(const Point &assign)
{
	(void) assign;
	return *this;
}

//Getters and Setters

Fixed	Point::getXVal() const
{
	return _x;
}

Fixed	Point::getYVal() const
{
	return _y;
}

