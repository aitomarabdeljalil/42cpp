/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:11:28 by aait-oma          #+#    #+#             */
/*   Updated: 2023/03/13 17:00:51 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
        std::cerr << "Error" << std::endl;
        return 1;
    }
	std::string expr = av[1];
	RPN equation(expr);
	std::cout << equation.getResult() << std::endl;
	return 0;
}