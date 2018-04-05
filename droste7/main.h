#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "stock.h"
#include "stocklist.h"

using namespace std;



void secondStock(stock d){
    char zeichen;
    char puffer[100];
    int zaehler;

    cout << endl <<"<--- Please type in a name for your converted file! --->" << endl << endl;
    string name;
    cin >> name;


    ifstream eingabe;
    ofstream ausgabe;
    ausgabe.open("C:/Users/Lukas/Desktop/droste7/stock/stocktuev/"+name+".xml",ios::app);



    eingabe.open("C:/Users/Lukas/Desktop/droste7/stock/stock.xml");
    for (zaehler=0;;)
        {
        eingabe.get(zeichen);
        if (eingabe.eof()) break;
        switch(zeichen)
           {
        case '<':
           if (zaehler)
              {
              puffer[zaehler]='\0';
              ausgabe <<  puffer << endl;;
              zaehler=0;
              }
           break;
        case ';':
           if (zaehler)
              {
              puffer[zaehler]='\0';
              ausgabe << "<date>" << endl << d.getDay() << d.getMonth() << d.getYear() << endl << "</date>" << endl;
              zaehler=0;
              }
           break;
        case '>':
           if (zaehler)
              {
              puffer[zaehler]='\0';
              ausgabe << "<" << puffer << ">" << endl;
              zaehler=0;
              }
           break;
        case '\n':
           break;
        default:
           puffer[zaehler]=zeichen;
           zaehler++;
           break;
           }


        }
    cout << endl << "Your file was created as " << name << ".xml inside the programs directory." << endl;
    cout << endl << "1. Type in 'e' to export your Data!" << endl << endl;
    eingabe.close();
    }




#endif // MAIN_H
