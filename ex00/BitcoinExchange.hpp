#ifndef BITCOINEXCHANGE_HPP

#define BITCOINEXCHANGE_HPP
#include <fstream>
#include <iostream>
#include <map>

class BitcoinExchange
{
  private:
	std::map<std::string, int> _data;
	std::map<std::string, int> _tofind;

	void fillMap(std::string line);

  public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &cpy);
	~BitcoinExchange();
	BitcoinExchange &operator=(const BitcoinExchange &rhs);

	void addData(std::ifstream &data);
};

#endif // !BITCOINEXCHANGE_HPP
