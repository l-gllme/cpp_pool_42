/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:59:28 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/14 12:22:24 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm
{
	public:
	
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &src);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm &src);

	virtual void	execute(const Bureaucrat &executor) const;
	
	private:
	std::string	_target;
};

#endif
