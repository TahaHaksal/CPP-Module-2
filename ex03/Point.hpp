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
		Fixed	getXVal();
		Fixed	getYVal();
		
	private:
		Fixed const _x;
		Fixed const _y;
};
