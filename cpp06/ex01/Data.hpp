/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:31:36 by aait-oma          #+#    #+#             */
/*   Updated: 2022/11/10 19:00:37 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>

struct Data{
    std::string name;
    int age;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif