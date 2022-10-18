#pragma once 
#include <iostream>
#include <cmath>

class Fixed
{
public:
    //Constructors
    Fixed();
    Fixed(const Fixed &obj);
    Fixed ( const int raw_integer );
    Fixed ( const float raw_float );
    Fixed   &operator=(const Fixed &obj);

    //Overloading Operators
    bool    operator==(const Fixed &obj) const;
    bool    operator>(const Fixed &obj) const;
    bool    operator<(const Fixed &obj) const;
    bool    operator>=(const Fixed &obj) const;
    bool    operator<=(const Fixed &obj) const;
    bool    operator!=(const Fixed &obj) const;
    Fixed   operator+(const Fixed &obj) const;
    Fixed   operator-(const Fixed &obj) const;
    Fixed   operator*(const Fixed &obj) const;
    Fixed   operator/(const Fixed &obj) const;
    Fixed   operator++(int);
    Fixed   operator++();

    //Destructor
    ~Fixed();
    
    //Member Functions
    static Fixed&  min(Fixed &num1, Fixed &num2);
    static Fixed&  min(const Fixed &num1, const Fixed &num2);
    static Fixed&  max(Fixed &num1, Fixed &num2);
    static Fixed&  max(const Fixed &num1, const Fixed &num2);
    float   toFloat ( void ) const;
    int     toInt ( void ) const;
    int     getRawBits ( void ) const;
    void    setRawBits ( int const raw);

private:
    int                 _number_val;
    static const int    _fractional_bitz;
};

std::ostream& operator<< (std::ostream &os, Fixed const& obj);