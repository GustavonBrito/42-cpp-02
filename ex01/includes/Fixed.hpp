/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 23:41:01 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/13 00:12:23 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include "iostream"

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
        
    private:
    
        int _fixed_number_point;
        int toInt( void ) const;
        float toFloat( void ) const;
        static const int  _fractionary_bits = 8;
};

#endif