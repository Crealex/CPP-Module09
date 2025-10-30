
#include "BitcoinExchange.hpp"
#include "colors.hpp"

BitcoinExchange::BitcoinExchange()
{
	std::cout << GREEN << "Default BitcoinExchange constructor called" << RESET << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy)
{
	std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
}

BitcoinExchange::~BitcoinExchange()
{
	std::cout << RED << "Destructor called" << RESET << std::endl;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs)
{
	return (*this);
}
