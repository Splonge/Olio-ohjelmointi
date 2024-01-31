#include "kokit.h"
#include "kokit2.h"
#include <iostream>
using namespace std;

kokit::kokit() {
    cout<< "Chef Ramsay konstruktori" <<endl;
    makeSoup();
    makeSalad();
}

kokit::~kokit()
{
    cout<< "Chef Ramsay destruktori" <<endl;
}

void kokit::makeSalad()
{
    cout << "makes salad" <<endl;
}

void kokit::makeSoup()
{
    cout << "makes soup" <<endl;
}

string kokit::name()
{


}




