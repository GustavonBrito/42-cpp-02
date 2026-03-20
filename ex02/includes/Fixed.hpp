/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 23:41:01 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/20 07:29:29 by gustavo-lin      ###   ########.fr       */
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
        Fixed(const int int_value);
        Fixed(const float float_value);
        Fixed(Fixed const& other); // Variable Reference 
        
        Fixed &operator=(const Fixed &other);

        bool operator==(const Fixed &random_num);
        bool operator<=(const Fixed &random_num);
        bool operator>=(const Fixed &random_num);
        bool operator!=(const Fixed &random_num);
        bool operator<(const Fixed &random_num);
        bool operator>(const Fixed &random_num);
        
        Fixed operator+(const Fixed &random_num) const;
        Fixed operator-(const Fixed &random_num) const;
        Fixed operator*(const Fixed &random_num) const;
        Fixed operator/(const Fixed &random_num) const;
        
        Fixed & operator++(void);
        Fixed & operator--(void);
        Fixed operator--(int);
        Fixed operator++(int);
        
        ~Fixed(void);
        
        static Fixed &min(Fixed &num1, Fixed &num2);
        static Fixed &max(Fixed &num1, Fixed &num2);
        static const Fixed &max(const Fixed &num1, const Fixed &num2);
        static const Fixed &min(const Fixed &num1, const Fixed &num2);
        
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
        
    private:
    
        int _fixed_number_point;
        static const int  _fractionary_bits = 8;
};

std::ostream &operator<<(std::ostream &os, Fixed const &fixed); 

#endif