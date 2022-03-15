/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:27:17 by chdespon          #+#    #+#             */
/*   Updated: 2022/03/14 19:48:33 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <stdlib.h>
class RobotomyRequestForm: public Form
{
	private:
		std::string	_target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &cpy);
		~RobotomyRequestForm();

		RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);

		void	executeForm(void) const;
};

#endif
