#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout<<"Default constructor called"<<std::endl;
    _number_val = 0;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout<<"Copy constructor called"<<std::endl;
    _number_val = obj.getRawBits();
}

Fixed &Fixed::operator = (const Fixed &obj)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    _number_val = obj.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits ( void ) const
{
    std::cout<< "getRawBits called" <<std::endl;
    return (_number_val);
}

void    Fixed::setRawBits ( int const raw)
{
    _number_val = raw;
}