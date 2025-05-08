/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:49:35 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/10 15:38:54 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat : public Animal {
    private:
    Brain *brain;
    public:
        Cat();
        Cat(const Cat &other);
		Cat&	operator=(const Cat &other);
        ~Cat();

        void makeSound() const;
};

#endif