/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:51:57 by chdespon          #+#    #+#             */
/*   Updated: 2022/02/04 14:37:43 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;

	public:
		contact(void) {}
		~contact(void) {}

		void	set_first_name(std::string name) {_first_name = name;}
		void	set_last_name(std::string last_name) {_last_name = last_name;}
		void	set_nickname(std::string nickname) {_nickname = nickname;}
		void	set_phone_number(std::string phone_number) {_phone_number = phone_number;}
		void	set_darkest_secret(std::string darkest_secret) {_darkest_secret = darkest_secret;}

		std::string	first_name(void) const {return _first_name;}
		std::string	last_name(void) const {return _last_name;}
		std::string	nickname(void) const {return _nickname;}
		std::string	phone_number(void) const {return _phone_number;}
		std::string	darkest_secret(void) const {return _darkest_secret;}
};

#endif
