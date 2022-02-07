/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:18:17 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/07 18:28:45 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string *string_ptr = &brain;
	std::string &string_ref = brain;

	std::cout << "Adress of string : " << &brain << std::endl;
	std::cout << "Adress of PTR : "  << string_ptr << std::endl;
	std::cout << "Adress of REF : " << &string_ref << std::endl;

	std::cout << "Value of string : " << brain << std::endl;
	std::cout << "Value of PTR : " << *string_ptr << std::endl;
	std::cout << "Value of REF : " << string_ref << std::endl;

}
