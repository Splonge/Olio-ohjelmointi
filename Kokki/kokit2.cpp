#include "kokit2.h"

kokit2::kokit2() {
    cout<< "Chef Bourdeau konstruktori" <<endl;
    makeSoup();
    makeSalad();
}

kokit2::~kokit2()
{
    cout<< "Chef Bourdeau destruktori" <<endl;
}

string kokit2::Chef()
{
    cout<< "Chef Bourdeau";
}

void kokit2::makeSalad()
{
    cout << "makes salad" <<endl;
}

void kokit2::makeSoup()
{
    cout << "makes soup" <<endl;
}

string kokit2::name()
{


}
