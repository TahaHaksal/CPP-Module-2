#pragma once

# include <iostream>
# include <string>
# include "Fixed.hpp"

class Point
{
	public:
		// Constructors
		Point ();
		Point (const float x_val, const float y_val);
		Point (const Point &copy);
		
		// Destructor
		~Point ();
		
		// Operators
		Point & operator=(const Point &assign);

		//Getters and Setters
		Fixed	getXVal() const;
		Fixed	getYVal() const;
		
	private:
		Fixed const _x;
		Fixed const _y;
};

bool    bsp(Point a, Point b, Point c, Point const point);