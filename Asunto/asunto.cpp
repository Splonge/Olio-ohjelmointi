#include "asunto.h"
#include <iostream>
using namespace std;

asunto::asunto() {
    henkilot = 2;
    nelio = 1000;
    cout << "Asunto luotu\n" << "asukkaita:" << henkilot << ", nelioita: " << nelio << endl;
}

int asunto::asukasmaara() {
    henkilot = 2;
    return henkilot =2;
}

int asunto::neliot() {
    nelio = 1000;
    return nelio = 1000;
}

double asunto::laskekulutus(double) {
    return 100;
}



