/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 16:49:35 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/15 18:29:25 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat : public Animal {
public:
    Cat();
    ~Cat();
    using   Animal::operator=;
    void makeSound() const;
};

#endif