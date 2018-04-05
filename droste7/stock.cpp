#include "stock.h"
using namespace std;

stock::stock(string stockInformation)
{
   stringstream stockStream(stockInformation);
   stockStream >> day;
   stockStream >> month;
   stockStream >> year;

}

string stock::getDay()
{
    return day;
}

string stock::getMonth()
{
    return month;
}

string stock::getYear()
{
    return year;
}


