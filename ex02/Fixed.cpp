#include "Fixed.hpp"

const int Fixed::_fractional_bitz = 8;

std::ostream& operator << (std::ostream &os, Fixed const& obj){
    return os << obj.toFloat();
}

Fixed::Fixed(){
    std::cout<<"Default constructor called"<<std::endl;
    _number_val = 0;
}

Fixed::Fixed(const Fixed &obj){
    std::cout<<"Copy constructor called"<<std::endl;
    _number_val = obj.getRawBits();
}

Fixed &Fixed::operator = (const Fixed &obj){
    std::cout<<"Copy assignment operator called"<<std::endl;
    _number_val = obj.getRawBits();
    return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits ( void ) const{
    return (_number_val);
}

void    Fixed::setRawBits ( int const raw ){
    _number_val = raw;
}

Fixed::Fixed ( const int raw_integer ){
    _number_val = raw_integer * (1 << _fractional_bitz);
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed ( const float raw_float ){
    _number_val = round((raw_float * (1 << _fractional_bitz)));
    std::cout << "Float constructor called" << std::endl;
}

float   Fixed::toFloat ( void ) const{
    return ((float)_number_val / (1 << _fractional_bitz));
}

int     Fixed::toInt ( void ) const{
    return (_number_val / (1 << _fractional_bitz));
}

// bool    operator>(Fixed &obj, Fixed &obj2){
//     if (obj2.toFloat() < obj.toFloat())
//         return (true);
//     else
//         return (false);
// }

// bool    operator<(Fixed &obj, Fixed &obj2){
//     if (obj2.toFloat() > obj.toFloat())
//         return (true);
//     else
//         return (false);
// }

// bool    operator>=(Fixed &obj, Fixed &obj2){
//     if (obj2.toFloat() <= obj.toFloat())
//         return (true);
//     else
//         return (false);
// }

// bool    operator<=(Fixed &obj, Fixed &obj2){
//     if (obj2.toFloat() >= obj.toFloat())
//         return (true);
//     else
//         return (false);
// }

bool    Fixed::operator==(const Fixed &obj, const Fixed &obj2){
    if (obj2.toFloat() == obj.toFloat())
        return (true);
    else
        return (false);
}

// bool    operator!=(Fixed &obj, Fixed &obj2){
//     if (obj2.toFloat() != obj.toFloat())
//         return (true);
//     else
//         return (false);
// }