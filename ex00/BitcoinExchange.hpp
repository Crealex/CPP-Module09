#ifndef BITCOINEXCHANGE_HPP

#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <map>

class BitcoinExchange
{
  private:
	std::map<std::string, int> _data;
	std::map<std::string, int> _tofind;

  public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &cpy);
	~BitcoinExchange();
	BitcoinExchange &operator=(const BitcoinExchange &rhs);
};

#endif // !BITCOINEXCHANGE_HPP
