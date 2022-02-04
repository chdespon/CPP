/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:54:30 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/04 13:53:33 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK
# define PHONE_BOOK

#include <string>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include "contact_class.hpp"
#include "PhoneBook_class.hpp"

bool	add_contact(const int nb_contact, PhoneBook &PhoneBook);

#endif
