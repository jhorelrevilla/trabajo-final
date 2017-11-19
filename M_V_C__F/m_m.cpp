#include "m_m.h"

m_m::m_m()
{
    vida=100;
    vidas=3;
    puntaje=0;
    dmg=false;
    muerte_T=false;
    player_S="";
    k_enemy=false;
}
void m_m::add_vidas()
{
    if (puntaje==100){vida+=1;}
}
void m_m::quitarvida()
{
    if (muerte_T==true){vidas-=1;}
}
void m_m::restarvida()
{
    if (dmg==true){vida;}
}
void m_m::add_puntaje()
{
    if (k_enemy==true){puntaje+=15;}
}
void m_m::setN_S(std::string player_S)
{
    this->player_S=player_S;
}
