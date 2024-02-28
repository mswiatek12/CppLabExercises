#include "Kwadrat.h"

Kwadrat::Kwadrat(int bok) : bok(bok) {}

void Kwadrat::wypisz() const {
    std::cout << "Kwadrat o boku: " << bok << std::endl;
}

double Kwadrat::polePow() const {
    return bok * bok;
}