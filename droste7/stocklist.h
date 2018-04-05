#ifndef STOCKLIST_H
#define STOCKLIST_H
#include <string>
#include<vector>
#include "stock.h"
#include <fstream>

class stocklist
{
public:
    stocklist(std::string path);



//private:
    std::vector<stock> stocks;


};

#endif // STOCKLIST_H
