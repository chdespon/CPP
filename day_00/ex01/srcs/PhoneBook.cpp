/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:32:17 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/03 19:10:19 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

static bool	add_contact(const int nb_contact, PhoneBook &PhoneBook)
{
	contact		*contact;
	std::string	line;

	contact = &PhoneBook.contact[nb_contact % 8];
	std::cout << "Enter First name" << std::endl;
	std::getline(std::cin, line);
	if (line.empty() == false)
		contact->set_first_name(line);
	std::cout << "Enter Last name" << std::endl;
	std::getline(std::cin, line);
	if (line.empty() == false)
		contact->set_last_name(line);
	std::cout << "Enter Nickname" << std::endl;
	std::getline(std::cin, line);
	if (line.empty() == false)
		contact->set_nickname(line);
	std::cout << "Enter Phone number" << std::endl;
	std::getline(std::cin, line);
	if (line.empty() == false)
		contact->set_phone_number(line);
	if (contact->phone_number().find_first_not_of("0123456789") == 0)
	{
		std::cout << "Phone number incorrect, contact not add" << std::endl;
		return (false);
	}
	std::cout << "Enter Darkest secret" << std::endl;
	std::getline(std::cin, line);
	if (line.empty() == false)
		contact->set_darkest_secret(line);
	system("clear");
	return (true);
}

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
	std::getline(std::cin, line);
	while (line.find_first_not_of("0123456789") == 0 ||
		std::atoi(line.c_str()) > nb_contact || std::atoi(line.c_str()) > 8 ||
		std::atoi(line.c_str()) < 1)
	{
		if (std::atoi(line.c_str()) > nb_contact || std::atoi(line.c_str()) > 8)
			std::cout << "This contact is not created" << std::endl;
		else
			std::cout << "Only digit is accepted for index" << std::endl;
		std::getline(std::cin, line);
	}
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
	std::cout << "Type \"EXIT\" \"ADD\" or \"SEARCH\"" << std::endl;
	while (std::getline(std::cin, line))
	{
		if (line.compare("EXIT") == 0)
			return (0);
		else if (line.compare("ADD") == 0 &&
			add_contact(nb_contact, PhoneBook) == true)
		{
			std::cout << "Contact ADD" << std::endl;
			nb_contact++;
		}
		else if (line.compare("SEARCH") == 0 &&
			print_contact(nb_contact, PhoneBook) == true)
		{
			search_contact(nb_contact, PhoneBook);
		}
		std::cout << "Type \"EXIT\" \"ADD\" or \"SEARCH\"" << std::endl;
		if (nb_contact >= 8)
			std::cout << "Next ADD will remove the oldest contact" << std::endl;
	}
	return (0);
}
