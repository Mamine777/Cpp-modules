/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokariou <mokariou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 10:56:12 by mokariou          #+#    #+#             */
/*   Updated: 2025/02/04 13:46:47 by mokariou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "seg.hpp"

int main(int ac, char **av){

	seg Seg;
    std::string buffer;

	std::ifstream inputFile(av[1]);
	if (ac != 4) {std::cout << "not the right args required" << std::endl; return 1;}
	if (!inputFile.is_open()) {std::cerr << "Error opening file!" << std::endl; return 1;}

	std::string line;
	while (std::getline(inputFile, line))
		Seg.set_name(line);
    inputFile.close();
    std::ofstream output((std::string(av[1]) + ".replace").c_str());
    buffer = Seg.get_name();
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string result;
    size_t  findIndex = buffer.find(s1);
    size_t  pos = 0;
    while (findIndex != std::string::npos)
    {
        result.append(buffer, pos, findIndex - pos);
        result.append(s2);
        pos = findIndex + s1.length();
        findIndex = buffer.find(s1, pos);
    }
    result.append(buffer, pos, buffer.length() - pos);
    output << result;
    output.close();
	return (0);
}