#include "Power_UP.h"

Power_UP::Power_UP()
{
    this -> nombre = NULL;
}
Power_UP::Power_UP(char *nombre1,Posicion pos1)
{
    this -> nombre = nombre1;
    this -> pos = pos1;
}
