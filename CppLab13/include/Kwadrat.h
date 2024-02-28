#ifndef KWADRAT_H
#define KWADRAT_H
#include "Kolo.h"
#include "Ksztalt.h"



class Kwadrat : public Ksztalt{
    private:
        int bok;
    public:
        Kwadrat(int value);
        //kosntruktor klasy przyjmujacy parametr int
        void wypisz()const override;
        //metoda wypisz klasy pochodnej
        double polePow() const override;
        //metoda polePow klasy pochodnej
};


#endif