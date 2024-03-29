/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:46:11 by aait-oma          #+#    #+#             */
/*   Updated: 2022/10/24 12:32:21 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed
{
private:
    int fixe;
    static const int fractp;
public:
    Fixed();
    Fixed(const Fixed& f);
    Fixed& operator=(const Fixed& f);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBite(int const raw);
};

#endif