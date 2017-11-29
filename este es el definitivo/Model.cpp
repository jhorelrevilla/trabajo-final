#include "Model.h"

bool Model::col(int x, int y, int xz, int yz){
    if (x==xz && y ==yz)
        {return true;}
    else
        return false;
}
