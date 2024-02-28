#ifndef KSZTALT_H
#define KSZTALT_H
#include <iostream>

class Ksztalt{
    public:
        virtual ~Ksztalt();
        //destruktor
        virtual void wypisz() const;
        //funkcja wirtualna wypisz w klasie bazowej
        virtual double polePow()const;
        //funcja wirtualna polePow w klasie bazowej
};

void wypisz(const Ksztalt& k);
//funkcja wypisujaca (zeby wypisac ksztalt)

#endif
