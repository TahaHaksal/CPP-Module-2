#pragma once 
#include <iostream>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &obj);
    Fixed ( const int raw_integer );
    Fixed ( const float raw_float );
    Fixed   &operator=(const Fixed &obj);
    ~Fixed();
    float   toFloat ( void ) const;
    int     toInt ( void ) const;
    int     getRawBits ( void ) const;
    void    setRawBits ( int const raw);
    bool    Fixed::operator==(const Fixed& obj, const Fixed& obj2);   

private:
    int                 _number_val;
    static const int    _fractional_bitz;
};

// bool    operator>(Fixed &obj, Fixed &obj2);
// bool    operator<(Fixed &obj, Fixed &obj2);
// bool    operator>=(Fixed &obj,  Fixed &obj2);
// bool    operator<=(Fixed &obj,  Fixed &obj2);
// bool    operator!=(Fixed &obj,  Fixed &obj2);
std::ostream& operator<< (std::ostream &os, Fixed const& obj);