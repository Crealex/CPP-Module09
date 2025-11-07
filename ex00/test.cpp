#include "colors.hpp"
#include <ctime>
#include <iostream>

// REFLECHIR A COMPLETEMET CHANGER POUR UTILISER LES STRINFSTREAM /!\

int main(int argc, char **argv)
{
	// std::string stringDate("2023-02-30");
	struct tm date{};
	struct tm after{};

	if (argc != 2)
	{
		std::cerr << RED << "Please one aurgument with 'YYYY-MM-DD'" << RESET << std::endl;
		return (1);
	}
	std::cout << "Raw arguments: " << argv[1] << std::endl;
	if (!strptime(argv[1], "%Y-%m-%d", &date))
	{
		std::cout << RED << "Invalid date format =>" << argv[1] << RESET << std::endl;
		return (1);
	}
	after = date;
	mktime(&date);
	// if (date.tm_year != after.tm_year)
	//	std::cout << RED << "Invalid year => " << after.tm_year + 1900 << RESET << std::endl;
	// if (date.tm_mon != after.tm_mon)
	//	std::cout << RED << "Invalid month => " << after.tm_mon + 1 << RESET << std::endl;
	// if (date.tm_mday != after.tm_mday)
	//	std::cout << RED << "Invalid day => " << after.tm_mday << RESET << std::endl;
	if (date.tm_year != after.tm_year || date.tm_mday != after.tm_mday || date.tm_mon != after.tm_mon)
	{
		std::cerr << RED << "Invalid date => " << after.tm_year + 1900 << "-" << after.tm_mon + 1 << "-" << after.tm_mday << RESET << std::endl;
		return (1);
	}
	std::cout << GREEN << "Date valid! => " << date.tm_year + 1900 << "-" << date.tm_mon + 1 << "-" << date.tm_mday << RESET << std::endl;
	return (0);
}
