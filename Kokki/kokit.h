#ifndef KOKIT_H
#define KOKIT_H
#include <iostream>
using namespace std;

class kokit
{
public:
    kokit();
    ~kokit();
    string Chef();
    void makeSalad();
    void makeSoup();

private:

protected:
   string name();
};

#endif // KOKIT_H
