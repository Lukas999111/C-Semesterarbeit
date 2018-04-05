#include "stocklist.h"
using namespace std;
stocklist::stocklist(string path)
{
    ifstream stockFile(path);

    string lineContents;
    while (!stockFile.eof())
    {
        getline(stockFile, lineContents);
        stock s(lineContents);

        stocks.push_back(s);

    }

    stockFile.close();

    }

