#include <iostream>
#include "Controller.h"
#include "Model.h"
using namespace std;

int main()
{
    Model m;
    m.show_puntaje();
    Controller c;
    c.tecla(false);
    return 0;
}
