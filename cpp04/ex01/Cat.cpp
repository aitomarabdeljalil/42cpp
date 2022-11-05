/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 18:52:04 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/23 14:43:47 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    br = new Brain();
    std::cout << "Cat Default Constructor called." << std::endl;
}

Cat::Cat(const Cat& c)
{
    std::cout << "Copy constructor called" << std::endl;
    this->type = c.getType();
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &other)
        this->type = other.getType();
    return *this; 
}

void Cat::makeSound() const
{
    std::cout << "Meow, meow." << std::endl;
}

Cat::~Cat()
{
    delete br;
    std::cout << "Cat Default Destructor called." << std::endl;
}
