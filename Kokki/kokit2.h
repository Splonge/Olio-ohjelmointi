#ifndef KOKIT2_H
#define KOKIT2_H
#include "kokit.h"
#include <iostream>
using namespace std;

class kokit2: public kokit
{
public:
    kokit2();
    ~kokit2();
    string Chef();
    void makeSalad();
    void makeSoup();

private:

protected:
    string name();
};

#endif // KOKIT2_H
