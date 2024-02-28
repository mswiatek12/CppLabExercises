#ifndef KOLO_H
#define KOLO_H
#include <iostream>
#include <cmath>
#include "Ksztalt.h"

class Kolo : public Ksztalt{
    public:
        Kolo(int value);
        //kosntruktor klasy przujmacy parametr int
        void wypisz()const override;
        //metoda wypisz metody pchodnej
        double polePow() const override;
        //metoda polePow klasy pochodnej
    private:
        int r;
};

#endif