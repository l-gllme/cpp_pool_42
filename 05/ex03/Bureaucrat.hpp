/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:56:51 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/14 12:21:43 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#define H 1
#define L 150

#include <iostream>
#include <stdexcept>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	public:

		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();
		
		Bureaucrat	&operator=(const Bureaucrat &src);

		std::string	getName(void) const;
		int	getGrade(void) const;

		void		incGrade(void);
		void		decGrade(void);

		void		signForm(AForm &src);
		void		executeForm(const AForm &AForm);

		/* Nested Class and Exceptions */

		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};

	private:

		const std::string	_name;
		int			_grade;
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &src);

#endif
