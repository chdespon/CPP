/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:58:48 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/02 19:35:51 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

contact::contact(void)
{
	_first_name = "none";
	_last_name = "none";
	_nickname = "none";
	_darkest_secret = "none";
	return ;
}

contact::~contact(void)
{
	return ;
}

