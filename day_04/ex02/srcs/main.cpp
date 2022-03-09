/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:16:16 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/07 15:48:22 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	const AAnimal* tab[10];
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "-----------MakeSound-----------" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	i->makeSound();
	j->makeSound();
	std::cout << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "--Creating tab of Dogs and Cats--" << std::endl;
	std::cout << "---------------------------------" << std::endl;

	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
	}

	std::cout << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "--Deleting tab of Dogs and Cats--" << std::endl;
	std::cout << "---------------------------------" << std::endl;

	for (size_t i = 0; i < 10; i++)
		delete tab[i];

	std::cout << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << "Cloning a very good boy for science" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << "Making a good boy" << std::endl;

	const Dog*	good_boy = new Dog();
	std::cout << "Creating a copy of a good boy:" << std::endl;
	const Dog*	copy = new Dog(*good_boy);

	std::cout << "Address of the good boy brain             : "
		<< &(*(good_boy->get_brain_access())) << std::endl;

	std::cout << "Address of the copy of the good boy brain : "
		<< &(*(copy->get_brain_access())) << std::endl;

	delete j;
	delete i;
	delete good_boy;
	delete copy;
	return (0);
}
