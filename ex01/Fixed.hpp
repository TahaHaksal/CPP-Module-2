#pragma once 
#include <iostream>


class Fixed
{
public:
    Fixed ();
    Fixed (const Fixed &obj);
    Fixed ( const int raw_integer );
    Fixed ( const float raw_float );
    Fixed &operator=(const Fixed &obj);
    ~Fixed ();
    float   toFloat ( void ) const;
    int     toInt ( void ) const;
    int     getRawBits ( void ) const;
    void    setRawBits ( int const raw);

private:
    int                 _number_val;
    static const int    _fractional_bitz;
};

std::ostream& operator<< (std::ostream &os, Fixed const& obj);