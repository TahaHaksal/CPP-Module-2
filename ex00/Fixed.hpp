#pragma once 
#include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &obj);
    Fixed &operator = (const Fixed &obj);
    ~Fixed();
    int getRawBits ( void ) const;
    void    setRawBits ( int const raw);

private:
    int                 _number_val;
    static const int    _fractional_bitz = 8;
};