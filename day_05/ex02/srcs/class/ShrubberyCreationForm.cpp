/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:30:14 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/14 19:57:40 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):
Form("ShrubberyCreation", 145, 137), _target("No target")
{
	std::cout << "Default constructor called (ShrubberyCreationForm)" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("ShrubberyCreation", 145, 137), _target(target)
{
	std::cout << "Target constructor called (ShrubberyCreationForm)"
		<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy):
Form("ShrubberyCreation", 145, 137), _target(cpy._target)
{
	std::cout << "Copy constructor called (ShrubberyCreationForm)" << std::endl;
	*this = cpy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Default destructor called (ShrubberyCreationForm)" << std::endl;
}

void	ShrubberyCreationForm::executeForm(void) const
{
	std::ofstream	of;
	std::string		fileName;

	fileName = _target + "_shrubbery";
	of.open(fileName.c_str());
	of << "          *\n"
		<< "         / \\\n"
		<< "        /   \\\n"
		<< "       *     \\\n"
		<< "      / \\     *\n"
		<< "     *   *   / \\\n"
		<< "            *   \\\n"
		<< "                 *\n"
		<< "                /\n"
		<< "               *\n"
		<< "     *\n"
		<< "    / \\\n"
		<< "   /   \\\n"
		<< "  *     \\\n"
		<< " / \\     *\n"
		<< "*   *   / \\\n"
		<< "       *   \\\n"
		<< "            *                      *\n"
		<< "           / \\                    / \\\n"
		<< "          *   *                  /   \\\n"
		<< "                                *     \\\n"
		<< "                               /       *\n"
		<< "                              *       / \\\n"
		<< "                                     *   \\\n"
		<< "                                          *\n"
		<< "     *                                   / \\\n"
		<< "    / \\                                 *   *\n"
		<< "   /   \\\n"
		<< "  *     \\\n"
		<< " / \\     *\n"
		<< "*   *   / \\\n"
		<< "       *   \\\n"
		<< "            *\n"
		<< "             \\\n"
		<< "              *\n"
		<< "\n";
	// of.close();
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		_target = rhs._target;
	return (*this);
}
