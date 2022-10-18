#include "Point.hpp"

// Constructors
Point::Point()
{
	std::cout << "\e[0;33mDefault Constructor called of Point\e[0m" << std::endl;
}

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y)
{
	std::cout << "\e[0;33mCopy Constructor called of Point\e[0m" << std::endl;
}

Point::Point (const float x_val, const float y_val) :_x(x_val), _y(y_val)
{
	
}

// Destructor
Point::~Point()
{
	std::cout << "\e[0;31mDestructor called of Point\e[0m" << std::endl;
}


// Operators
Point & Point::operator=(const Point &assign)
{
	(void) assign;
	return *this;
}

//Getters and Setters

Fixed	Point::getXVal()
{
	return _x;
}

Fixed	Point::getYVal()
{
	return _y;
}

