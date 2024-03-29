/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:44:25 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/16 15:11:15 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	a(100001);

	try {
		for (int i = -1; i < 100000; ++i)
			a.addNumber(i);
		std::cout << "Max Span: " <<  a.longestSpan() << std::endl;
		std::cout << "Min Span: " << a.shortestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	Span b(200);

	std::cout << std::endl <<"Span with  super add number\n" << std::endl;
	try {
		b.addNumber(30);
		b.superAddNumber(198);
		std::cout << "Max Span: " <<  b.longestSpan() << std::endl;
		std::cout << "Min Span: " << b.shortestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
