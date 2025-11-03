
#include "BitcoinExchange.hpp"
#include "colors.hpp"
#include <ctime>
#include <string>
#include <utility>

BitcoinExchange::BitcoinExchange() {
  std::cout << GREEN << "Default BitcoinExchange constructor called" << RESET
            << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy) {
  std::cout << BLUE << "Copy constructor called" << RESET << std::endl;
}

BitcoinExchange::~BitcoinExchange() {
  std::cout << RED << "Destructor called" << RESET << std::endl;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs) {
  return (*this);
}

void checkline(std::string line) {
  // check the line
}

void BitcoinExchange::fillMap(std::string line) {
  std::string date;
  int value;
  size_t comma;

  comma = line.find(',');
  date = line.substr(0, comma);
  value = std::stoi(line.substr(comma, line.size()));
  std::pair<std::string, int> new_entry(date, value);
  this->_data.insert(new_entry);
}

void BitcoinExchange::addData(std::ifstream &data) {
  std::string line;
  int value;
  std::string date;

  while (!data.eof()) {

    std::getline(data, line, '\n');
    checkline(line); // maybe try/catch this
    this->fillMap(line);
  }
}
