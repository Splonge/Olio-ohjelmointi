#ifndef ITALIANKOKKI_H
#define ITALIANKOKKI_H
#include "kokit.h"
#include "kokit2.h"
#include <iostream>
using namespace std;

class ItalianKokki: public kokit2
{
public:
    ItalianKokki();
    ~ItalianKokki();
    string ItalianChef();
    string getName();
    void makePasta();

private:
    int vesi();
    int jauhot();
};

#endif // ITALIANKOKKI_H
