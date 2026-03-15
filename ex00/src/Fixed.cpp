/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 08:32:13 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/15 13:08:26 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::~Fixed(){std::cout << "Destructor dealocated\n";};

Fixed::Fixed() : _fixed_number_point(0) {std::cout << "Default constructor called\n";};

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called\n";

    if (this != &other)
        this->_fixed_number_point = other.getRawBits();

    return *this;
}

Fixed::Fixed(Fixed const& other) : _fixed_number_point(other._fixed_number_point)
{
    std::cout << "Copy constructor called\n";
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



