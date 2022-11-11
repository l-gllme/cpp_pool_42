/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:27:51 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/11 14:12:13 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#define	SCF ShrubberyCreationForm

/* Constructors */

SCF::SCF() : AForm("Default SCF", 145, 137)
{
	this->_target = "Default";
	this->setSigned(false);
	return ;
}


SCF::SCF(std::string name, std::string target) : AForm(name, 145, 137)
{
	this->_target = target;
	this->setSigned(false);
	return ;
}

SCF::SCF(const SCF &src) : AForm(src)
{
	*this = src;
	return ;
}

SCF::~SCF()
{
	return ;
}

SCF	&SCF::operator=(const SCF &src)
{
	this->setSigned(src.getSigned());
	return (*this);
}

/* ************** */

void	SCF::execute(const Bureaucrat &executor)
{
	(void)executor;
	std::string	filename;

	filename = this->_target += "_shrubbery";

	std::ofstream	cfs(filename.c_str());
	if (!cfs)
	{
		std::cout << "Error: Couldn't create "<< filename << std::endl;
		return ;
	}
	cfs << "       _-_" << std::endl;
	cfs << "    /~~   ~~\\" << std::endl;
	cfs << " /~~         ~~\\" << std::endl;
	cfs << "{               }" << std::endl;
	cfs << " \\  _-     -_  /" << std::endl;
	cfs << "   ~  \\\\ //  ~" << std::endl;
	cfs << "_- -   | | _- _" << std::endl;
	cfs << "  _ -  | |   -_" << std::endl;
	cfs << "      // \\\\" << std::endl;
	cfs.close();
	return ;
}
