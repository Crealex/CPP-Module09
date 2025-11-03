#include "colors.hpp"
#include <ctime>
#include <iostream>

int main()
{
	std::string stringDate("2023-04-23");
	struct tm date;
	struct tm temp_date;

	std::cout << strptime(stringDate.c_str(), "%Y-%m-%d", &temp_date) << std::endl;
	if (!strptime(stringDate.c_str(), "%Y-%m-%d", &date))
	{
		std::cout << RED << "Invalid date format!" << RESET << std::endl;
		return (1);
	}

	std::cout << mktime(&date) << std::endl;
	if (date.tm_year != temp_date.tm_year)
		std::cout << RED << "Invalid year => " << date.tm_year << RESET << std::endl;
	if (date.tm_mon != temp_date.tm_mon)
		std::cout << RED << "Invalid month => " << date.tm_mon << RESET << std::endl;
	if (date.tm_mday != temp_date.tm_mday)
		std::cout << RED << "Invalid day => " << date.tm_mon << RESET << std::endl;
	if (date.tm_year != temp_date.tm_year || date.tm_mday != temp_date.tm_mday || date.tm_mon != temp_date.tm_mon)
	{
		return (1);
	}
	return (0);
}
