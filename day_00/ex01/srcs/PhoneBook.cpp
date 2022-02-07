/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:32:17 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/04 15:37:42 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

static void	print_info(std::string info, int first_last)
{
	if (first_last == 1)
		std::cout << "|";
	if (info.size() >= 10)
	{
		info.erase(9);
		info += std::string(".");
	}
	std::cout << std::setw(10) << info << "|";
	if (first_last == 2)
		std::cout << std::endl;

}

static void	search_contact(const int nb_contact, const PhoneBook PhoneBook)
{
	std::string	line;
	int			index;

	std::cout << "Choose index for the contact" << std::endl;
	while (std::getline(std::cin, line))
	{
		if (line.find_first_not_of("0123456789") != std::string::npos)
			std::cout << "Only digit is accepted for index" << std::endl;
		else if (std::atoi(line.c_str()) > nb_contact
			|| std::atoi(line.c_str()) > 8 || std::atoi(line.c_str()) < 1)
			std::cout << "This contact is not created" << std::endl;
		else
		{
			index = std::atoi(line.c_str()) -1;
			std::cout << "First Name : " << PhoneBook.contact[index]
				.first_name() << std::endl;
			std::cout << "Last Name : " << PhoneBook.contact[index]
				.last_name() << std::endl;
			std::cout << "Nickname : " << PhoneBook.contact[index]
				.nickname() << std::endl;
			std::cout << "Phone number : " << PhoneBook.contact[index]
				.phone_number() << std::endl;
			std::cout << "Darkest secrect : " << PhoneBook.contact[index]
				.darkest_secret() << std::endl;
			return ;
		}
	}
}

static bool	print_contact(const int nb_contact, const PhoneBook PhoneBook)
{
	int	i;
	if (nb_contact == 0)
	{
		std::cout << "No contact ADD" << std::endl;
		return (false);
	}
	print_info("Index", 1);
	print_info("First Name", 0);
	print_info("Last name", 0);
	print_info("Nickname", 2);
	std::cout << "---------------------------------------------" << std::endl;
	i = 0;
	while (i < nb_contact && i < 8)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|";
		print_info(PhoneBook.contact[i].first_name(), 0);
		print_info(PhoneBook.contact[i].last_name(), 0);
		print_info(PhoneBook.contact[i].nickname(), 2);
		i++;
	}
	return (true);
}

int	main()
{
	PhoneBook	PhoneBook;
	std::string	line;
	int			nb_contact;

	nb_contact = 0;
	system("clear");
	std::cout << "************************************\n"
		"*****WELCOME TO YOUR PHONE BOOK*****\n"
		"************************************" << std::endl;
	std::cout << "Type \"EXIT\" \"ADD\" or \"SEARCH\"" << std::endl;
	while (std::getline(std::cin, line))
	{
		if (line.compare("EXIT") == 0)
			break ;
		else if (line.compare("ADD") == 0 &&
			add_contact(nb_contact, PhoneBook) == true)
		{
			std::cout << "Contact ADD" << std::endl;
			nb_contact++;
		}
		else if (line.compare("SEARCH") == 0
			&& print_contact(nb_contact, PhoneBook) == true)
			search_contact(nb_contact, PhoneBook);
		std::cout << "Type \"EXIT\" \"ADD\" or \"SEARCH\"" << std::endl;
		if (nb_contact >= 8)
			std::cout << "Next ADD will remove the oldest contact" << std::endl;
	}
	std::cout << "************************************\n"
		"************See you soon************\n"
		"************************************" << std::endl;
	return (0);
}
