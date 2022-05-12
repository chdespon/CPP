/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:16:16 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/11 16:06:10 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << "\n";
	std::cout << i->getType() << " " << "\n";
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	WrongCat	wrongCat;

	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	wrongMeta->makeSound();
	std::cout << wrongCat.getType() << " " << std::endl;
	wrongCat.makeSound();
	delete wrongMeta;
	delete k;
	delete i;
	delete j;
	delete meta;
	return (0);
}