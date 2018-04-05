#include <QCoreApplication>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "stock.h"
#include "stocklist.h"
#include "main.h"

using namespace std;





int main()
{

    int a = 1;

    cout << "<---- Welcome to Drostes Fantastic Stock Converter ---->" << endl << "********************************************************" <<endl;
    cout << "|     (E)xport your Data!                              |" << endl;
    cout << "|                                                      |"<< endl;
    cout << "|     (Q)uit!                                          |" << endl;
    cout << "|                                                      |" << endl;
    cout << "|      machine: ~User$                                 |" << endl;
    cout << "********************************************************" << endl;

        while (a > 0)
        {
        char input;
        cin >> input;

        if(input == 'e')
        {
         stocklist Stock("C:/Users/Lukas/Desktop/droste7/stock/tuev.txt");
         for (stock s : Stock.stocks)
         secondStock(s);
        }
        if(input == 'q')
        {
         return 0;
        }



}

   return 0;
}

