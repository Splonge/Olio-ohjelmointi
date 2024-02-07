#include "kerrostalo.h"
#include "kerros.h"
#include "katutaso.h"
#include "asunto.h"
#include <iostream>
using namespace std;

kerrostalo::kerrostalo() {
    cout<< "kerrostalo luotu\n";
    katutaso();
    kerros();
}
