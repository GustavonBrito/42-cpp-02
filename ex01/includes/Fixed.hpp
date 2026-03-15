/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo <gustavo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 23:41:01 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/15 17:04:22 by gustavo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(int const);
        Fixed(float const);
        Fixed(Fixed const& other); // Variable Reference 
        Fixed &operator<<(const Fixed &other); // Im giving equal operator another meaning 
        ~Fixed(void);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt( void ) const;
        float toFloat( void ) const;
        
    private:
    
        int _fixed_number_point;
        static const int  _fractionary_bits = 8;
};

std::ostream &operator<<(std::ostream &os, Fixed const &fixed); 

#endif