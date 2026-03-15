/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 08:32:13 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/15 13:08:35 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::~Fixed(){std::cout << "Destructor dealocated\n";};

Fixed::Fixed() : _fixed_number_point(0) {std::cout << "Default constructor called\n";};

Fixed & Fixed::operator=(const Fixed &other) 
{
    std::cout << "Copy assignment operator called\n";
    if (this == &other)
        return *this;
    
    this->_fixed_number_point = other.getRawBits();
    
    return *this;
};

Fixed::Fixed(Fixed const& other)
{
    _fixed_number_point = other._fixed_number_point;
    std::cout << "Copy construcotor called\n";
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called\n";
    return this->_fixed_number_point;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixed_number_point = raw << _fractionary_bits;
}

Fixed::Fixed(int const n) : _fixed_number_point(n << _fractionary_bits)
{
    std::cout << "Int constructor called\n";
}

Fixed::Fixed(float const f) : _fixed_number_point(roundf(f * (1 << _fractionary_bits)))
{
    std::cout << "Float constructor called\n";
}

int Fixed::toInt(void) const
{
    return this->_fixed_number_point >> _fractionary_bits;
}

float Fixed::toFloat(void) const
{
    return (float)this->_fixed_number_point / (1 << _fractionary_bits);
}


