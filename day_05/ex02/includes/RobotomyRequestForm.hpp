/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdespon <chdespon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:27:17 by chdespon          #+#    #+#             */
/*   Updated: 2022/05/12 15:50:35 by chdespon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <stdlib.h>

class RobotomyRequestForm: public AForm
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
