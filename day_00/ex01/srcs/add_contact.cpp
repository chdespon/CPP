/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_contact.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:51:56 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/04 15:22:55 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

static	void	add_darkest_secret(contact *contact)
{
	std::string	line;
	std::cout << "Enter darkest_secret" << std::endl;
	while (std::getline(std::cin, line))
	{
		if (line.empty() == false)
		{
			contact->set_darkest_secret(line);
			return ;
		}
		std::cout << "Empty entry" << std::endl;
		std::cout << "Enter darkest_secret" << std::endl;
	}
}

static	void	add_phone_number(contact *contact)
{
	std::string	line;
	std::cout << "Enter phone number" << std::endl;
	while (std::getline(std::cin, line))
	{
		if (line.find_first_not_of("0123456789") != std::string::npos)
		{
			std::cout << "Phone number incorrect, required only digits"
				<< std::endl;
			std::cout << "Enter phone number" << std::endl;
		}
		else if (line.empty() != false)
		{
			std::cout << "Empty entry" << std::endl;
			std::cout << "Enter phone number" << std::endl;
		}
		else
		{
			contact->set_phone_number(line);
			return ;
		}
	}
}

static	void	add_nickname(contact *contact)
{
	std::string	line;
	std::cout << "Enter Nickname" << std::endl;
	while (std::getline(std::cin, line))
	{
		if (line.empty() == false)
		{
			contact->set_nickname(line);
			return ;
		}
		std::cout << "Empty entry" << std::endl;
		std::cout << "Enter Nickname" << std::endl;
	}
}

static	void	add_last_name(contact *contact)
{
	std::string	line;
	std::cout << "Enter Last Name" << std::endl;
	while (std::getline(std::cin, line))
	{
		if (line.empty() == false)
		{
			contact->set_last_name(line);
			return ;
		}
		std::cout << "Empty entry" << std::endl;
		std::cout << "Enter Last Name" << std::endl;
	}
}

static	void	add_first_name(contact *contact)
{
	std::string	line;
	std::cout << "Enter First Name" << std::endl;
	while (std::getline(std::cin, line))
	{
		if (line.empty() == false)
		{
			contact->set_first_name(line);
			return ;
		}
		std::cout << "Empty entry" << std::endl;
		std::cout << "Enter First Name" << std::endl;
	}
}

bool	add_contact(const int nb_contact, PhoneBook &PhoneBook)
{
	contact		*contact;
	std::string	line;

	contact = &PhoneBook.contact[nb_contact % 8];
	add_first_name(contact);
	add_last_name(contact);
	add_nickname(contact);
	add_phone_number(contact);
	add_darkest_secret(contact);
	system("clear");
	return (true);
}