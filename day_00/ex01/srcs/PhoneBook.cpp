/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:32:17 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/02 19:36:46 by chdespon         ###   ########.fr       */
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
	contact->set_first_name(line);
	std::cout << "Enter Last name" << std::endl;
	std::getline(std::cin, line);
	contact->set_last_name(line);
	std::cout << "Enter Nickname" << std::endl;
	std::getline(std::cin, line);
	contact->set_nickname(line);
	std::cout << "Enter Phone number" << std::endl;
	std::getline(std::cin, line);
	contact->set_phone_number(line);
	if (contact->phone_number().find_first_not_of("0123456789") == 0
		|| contact->phone_number().empty() == true)
	{
		std::cout << "Phone number incorrect, contact not add" << std::endl;
		return (false);
	}
	std::cout << "Enter Darkest secret" << std::endl;
	std::getline(std::cin, line);
	contact->set_darkest_secret(line);
	system("clear");
	return (true);
}

// static void	print_line(std::string line)
// {

// }

static void	search_contact(const int nb_contact, const PhoneBook PhoneBook)
{
	int	i;
	if (nb_contact == 0)
	{
		std::cout << "No contact add" << std::endl;
		return ;
	}
	i = 0;
	while (i < 8 && i < nb_contact)
	{
		std::cout << PhoneBook.contact[i].first_name() << std::endl;
		std::cout << PhoneBook.contact[i].phone_number() << std::endl;
		i++;
	}

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
			return(0);
		else if (line.compare("ADD") == 0 && add_contact(nb_contact,
			PhoneBook) == true)
		{
			std::cout << "Contact add" << std::endl;
			nb_contact++;
		}
		else if (line.compare("SEARCH") == 0)
		{
			search_contact(nb_contact, PhoneBook);
		}
		else
			std::cout << "Type \"EXIT\" \"ADD\" or \"SEARCH\"" << std::endl;
		if (nb_contact >= 8)
			std::cout << "Next ADD will remove the olsdest contact" << std::endl;
	}



	// std::string lol = argv[1];
	// if (lol.size() >= 10)
	// {
	// 	lol.erase(9);
	// 	lol += std::string(".");
	// }
	// std::cout << std::setw(10) << lol << "\n";
	return (0);
}
