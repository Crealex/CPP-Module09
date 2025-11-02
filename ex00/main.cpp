#include "BitcoinExchange.hpp"
#include "colors.hpp"
#include <fstream>

int main(int argc, char **argv)
{
	BitcoinExchange btc;
	std::ifstream data("data.csv");

	if (!data.is_open())
	{
		std::cerr << RED << "Failed to open data.csv" << RESET << std::endl;
		return (1);
	}
	if (argc != 2)
	{
		std::cerr << RED << "Needed one csv files, not more, not less!" << RESET << std::endl;
		return (1);
	}

	btc.addData(data);
}
