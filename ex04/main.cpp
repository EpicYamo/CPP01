/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaycan <aaycan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 21:57:25 by aaycan            #+#    #+#             */
/*   Updated: 2026/03/31 22:43:47 by aaycan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

static int	print_error(int err);
static void	process_file(std::string str_one, std::string str_two, std::ifstream &file_input, std::ofstream &file_output);

int	main(int argc, char **argv)
{
	std::string		file_name;
	std::string		str_one;
	std::string		str_two;
	std::string		replacement_file;
	std::ifstream	file_input;
	std::ofstream	file_output;

	if (argc != 4)
		return (print_error(0));
	file_name = argv[1];
	str_one = argv[2];
	str_two = argv[3];
	file_input.open(file_name.c_str());
	if (file_input.good() == false)
		return (print_error(1));
	replacement_file = file_name + ".replace";
	file_output.open(replacement_file.c_str());
	if (file_output.good() == false)
	{
		file_input.close();
		return (print_error(2));
	}
	process_file(str_one, str_two, file_input, file_output);
	file_input.close();
	file_output.close();
	return (0);
}

static int	print_error(int err)
{
	if (err == 0)
		std::cerr << "Error: wrong syntax." << std::endl << "./replace <file_name> <string_to_replace> <new_string>" << std::endl;
	else if (err == 1)
		std::cerr << "Error: input file" << std::endl;
	else if (err == 2)
		std::cerr << "Error: output file" << std::endl;
	return (1);
}

static void	process_file(std::string str_one, std::string str_two, std::ifstream &file_input, std::ofstream &file_output)
{
	std::string	buffer;
	size_t		cursor;
	size_t		found;
	std::string	input;

	while (getline(file_input, buffer))
	{
		input = buffer + '\n';
		cursor = 0;
		while ((found = input.find(str_one, cursor)) != std::string::npos)
		{
			file_output << input.substr(cursor, found - cursor);
			file_output << str_two;
			cursor = found + str_one.length();
		}
		file_output << input.substr(cursor);
	}
}
