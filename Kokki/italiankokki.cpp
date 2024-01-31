#include "italiankokki.h"

ItalianKokki::ItalianKokki() {
    cout<< "Italian Kokki konstruktori" <<endl;
    makePasta();
    jauhot();
    vesi();
}

ItalianKokki::~ItalianKokki()
{
cout<< "Italian Kokki destruktori" <<endl;
}

string ItalianKokki::ItalianChef()
{

    }

void ItalianKokki::makePasta()
{
    cout<< "Makes Pasta with a secret recipe" <<endl;
}

int ItalianKokki::vesi()
{
    cout<< "adds water" <<endl;
}

int ItalianKokki::jauhot()
{
    cout<< "adds flout" <<endl;
}
