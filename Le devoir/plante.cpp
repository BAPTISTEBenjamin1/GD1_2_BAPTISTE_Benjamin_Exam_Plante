#include "plante.hpp"
#include <iostream>

Plante::Plante() : soif(50), croissance (0), faim(50), sante(100), volume(1)
{
    
    std::cout <<"Construction de la Plante";
    
    int soif = 10;
    
}

/*
Plante::Plante(int soif) : soif(1)
{
    
    std::cout <<"Construction de la Plante";
    
    
}

*/

void Plante::hello()
{
    std::cout <<"Hello";
}


void Plante::nourrir(int engrais)
{
    faim = faim + engrais;
}

void Plante::grandir()
{
    if(faim > 100){
        
        faim = faim - 25;
        croissance = croissance + 25;
    }
}



int Plante::getsoif() const
{
    return soif;
}


int Plante::getcroissance() const
{
    return croissance;
}

int Plante::getfaim() const
{
    return faim;
}

int Plante::getsante() const
{
    return sante;
}

int Plante::getvolume() const
{
    return volume;
}







