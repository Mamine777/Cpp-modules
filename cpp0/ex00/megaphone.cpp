/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 18:02:55 by mokariou          #+#    #+#             */
/*   Updated: 2024/12/21 14:11:44 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	ft_islpha(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (0);
	}
	int	i = 1;
	while (i < ac)
	{
		for (int o = 0; av[i][o]; o++)
			if (ft_islpha(av[1][o]) && (av[1][o] >= 'a' && av[1][o] <= 'z'))
				av[1][o] -= 32;
		std::cout << av[i];
		i++;
	}
	std::cout << std::endl;
		
	return (0);
	
}