#pragma once 
#ifndef BOOKS_H
#define BOOKS_H

using namespace std;
/*using std::string;
using std::ifstream;
using std::ofstream;*/

class Books {
private:
    int _number;
    string _name;
    double _price;
    string _author;
    string _pubHouse;

protected:
    int _type = 0;

public:
    Books(int type, int number, string name, double price, string author, string pubHouse);
    Books();
    int GetType() { return _type; }
    int GetNumber() { return _number; }
    string GetName() { return _name; };
    double GetPrice() { return _price; };
    string GetAuthor() { return _author; };
    string GetPubHouse() { return _pubHouse; };
    friend istream& operator>> (istream& input, Books& b);
    friend ostream& operator<< (ostream& output, Books& b);

};

#endif   //BOOKS_H