#include "Kolo.h"

Kolo::Kolo(int value): r(value) {}

void Kolo::wypisz()const {
    std::cout << "Kolo o promieniu: " << this->r << std::endl;
}

double Kolo::polePow()const{
    return 3.1415*r*r;
}






