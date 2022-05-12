/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:54:15 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/10 15:30:22 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main()
{

	std::cout << "------------------------------------" << "\n";
	std::cout << "Constructing Materia and Characters:" << "\n";
	std::cout << "------------------------------------" << "\n";
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	std::cout << "\n";
	std::cout << "---------------------------------------------------------" << "\n";
	std::cout << "Testing use() function (and with an empty inventory slot)"<< "\n";
	std::cout << "---------------------------------------------------------" << "\n";

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	std::cout << "\n";
	std::cout << "----------------------------" << "\n";
	std::cout << "Testing inventory size limit" << "\n";
	std::cout << "----------------------------" << "\n";

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << "\n";
	std::cout << "------------------------------" << "\n";
	std::cout << "Testing the unequip() function" << "\n";
	std::cout << "------------------------------" << "\n";

	std::cout << "Spell list is :" << "\n";
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	std::cout << "\n" << "Spell index 1 is :";
	me->use(1, *bob);
	std::cout << "\n" << "Unequipping spell index 1..." << "\n";
	me->unequip(1);
	std::cout << "\n" << "Spell index 1 is :";
	me->use(1, *bob);
	std::cout << "\n" << "Equipping a new spell (ice) :" << "\n";
	me->equip(tmp);

	std::cout << "\n" << "New spells are :" << "\n";
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	std::cout << "\n";
	std::cout << "----------------------------------" << "\n";
	std::cout << "Destroying Materia and Characters:" << "\n";
	std::cout << "----------------------------------" << std::endl;
	delete bob;
	delete me;
	delete src;

	return (0);
}
