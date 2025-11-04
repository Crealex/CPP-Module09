#include "colors.hpp"
#include <ctime>
#include <iostream>

int main()
{
	std::string stringDate("2023-02-30");
	struct tm date{};
	struct tm after{};

	// std::cout << strptime(stringDate.c_str(), "%Y-%m-%d", &after) << std::endl;
	if (!strptime(stringDate.c_str(), "%Y-%m-%d", &date))
	{
		std::cout << RED << "Invalid date format!" << RESET << std::endl;
		return (1);
	}
	after = date;
	std::cout << mktime(&date) << std::endl;
	if (date.tm_year != after.tm_year)
		std::cout << RED << "Invalid year => " << after.tm_year << RESET << std::endl;
	if (date.tm_mon != after.tm_mon)
		std::cout << RED << "Invalid month => " << after.tm_mon << RESET << std::endl;
	if (date.tm_mday != after.tm_mday)
		std::cout << RED << "Invalid day => " << after.tm_mon << RESET << std::endl;
	if (date.tm_year != after.tm_year || date.tm_mday != after.tm_mday || date.tm_mon != after.tm_mon)
	{
		return (1);
	}
	return (0);
}
