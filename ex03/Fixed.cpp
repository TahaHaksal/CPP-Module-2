#include "Fixed.hpp"

const int Fixed::_fractional_bitz = 8;

std::ostream& operator << (std::ostream &os, Fixed const& obj){
    return os << obj.toFloat();
}

Fixed::Fixed(){
    _number_val = 0;
}

Fixed::Fixed(const Fixed &obj){
    _number_val = obj.getRawBits();
}


Fixed &Fixed::operator = (const Fixed &obj){
    _number_val = obj.getRawBits();
    return *this;
}

Fixed::~Fixed(){
}

int     Fixed::getRawBits ( void ) const{
    return (_number_val);
}

void    Fixed::setRawBits ( int const raw ){
    _number_val = raw;
}

Fixed::Fixed ( const int raw_integer ){
    _number_val = raw_integer * (1 << _fractional_bitz);
}

Fixed::Fixed ( const float raw_float ){
    _number_val = (int)std::roundf((raw_float * (1 << _fractional_bitz)));
}

float   Fixed::toFloat ( void ) const{
    return ((float)_number_val / (1 << _fractional_bitz));
}

int     Fixed::toInt ( void ) const{
    return (_number_val / (1 << _fractional_bitz));
}

bool Fixed::operator==(const Fixed &obj) const
{
	return (this->toFloat() == obj.toFloat());
}

bool Fixed::operator!=(const Fixed &obj) const
{
	return (this->toFloat() != obj.toFloat());
}

bool Fixed::operator<(const Fixed &obj) const
{
	return (this->toFloat() < obj.toFloat());
}

bool Fixed::operator>(const Fixed &obj) const
{
	return (this->toFloat() > obj.toFloat());
}

bool Fixed::operator>=(const Fixed &obj) const
{
	return (this->toFloat() >= obj.toFloat());
}

bool Fixed::operator<=(const Fixed &obj) const
{
	return (this->toFloat() <= obj.toFloat());
}

Fixed Fixed::operator+(const Fixed &obj) const
{
    Fixed   temp;

    temp.setRawBits(getRawBits() + obj.getRawBits());
	return (temp);
}

Fixed Fixed::operator-(const Fixed &obj) const
{
	Fixed   temp;

    temp.setRawBits(getRawBits() - obj.getRawBits());
	return (temp);
}

Fixed Fixed::operator*(const Fixed &obj) const
{
	Fixed   temp;
    int     temp2;

    temp2 = ((int32_t)getRawBits() * (int32_t)obj.getRawBits());
    temp2 /= (1 << (_fractional_bitz));
    temp.setRawBits(temp2);
	return (temp);
}

Fixed Fixed::operator/(const Fixed &obj) const
{
    Fixed   temp (toFloat() / obj.toFloat());
    
	return (temp);
}

Fixed Fixed::operator++(int)
{
    Fixed temp;

    temp.setRawBits(getRawBits() + 1);
    setRawBits(temp.getRawBits());
    return (temp);
}

Fixed Fixed::operator++()
{
    Fixed temp;

    temp.setRawBits(getRawBits() + 1);
    setRawBits(temp.getRawBits());
    return (temp);
}

Fixed&  Fixed::min(Fixed &num1, Fixed &num2)
{
    if (num1.getRawBits() > num2.getRawBits())
        return num2;
    else
        return num1;
}

Fixed&  Fixed::min(const Fixed &num1, const Fixed &num2)
{
    if (num1.getRawBits() > num2.getRawBits())
        return ((Fixed &)num2);
    else
        return ((Fixed &)num1);
}

Fixed&  Fixed::max(Fixed &num1, Fixed &num2)
{
    if (num1.getRawBits() > num2.getRawBits())
        return num1;
    else
        return num2;
}

Fixed&  Fixed::max( Fixed const &num1,  Fixed const &num2)
{
    if (num1.getRawBits() > num2.getRawBits())
        return ((Fixed &)num1);
    else
        return ((Fixed &)num2);
}