#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <string>
#include <sstream>

class stock
{
public:
    //input for the stock
    stock(std::string stockInformation);

    std::string getDay();
    std::string getMonth();
    std::string getYear();


private:
    std::string day;
    std::string month;
    std::string year;


};

#endif // STOCK_H
