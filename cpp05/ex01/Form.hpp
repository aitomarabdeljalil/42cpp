/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-oma <aait-oma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:58:13 by aait-oma          #+#    #+#             */
/*   Updated: 2022/08/29 19:24:16 by aait-oma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        const std::string _Name;
        bool _Signed;
        const int _GradeRs;
        const int _GradeRe;
    public:
        Form(std::string Name, int GradeRs, int GradeRe);
        std::string getName() const;
        int getGradeRs() const;
        int getGradeRe() const;
        bool getSigned() const;
        void beSigned(const Bureaucrat& br);
        ~Form();

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade is Too High!";
                }
        };
            
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return "Grade is Too Low!";
                }
        };
};

std::ostream& operator<<(std::ostream& os, const Form& fr);

#endif