#ifndef M_C_H
#define M_C_H
#include <stdio.h>
#include <conio.h>
#include "m_m.h"
class m_c
{
    public:
        m_c();
        void movementP(bool gameover);
    protected:
        bool gameover;
};

#endif // M_C_H
