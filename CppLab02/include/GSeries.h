#ifndef GSERIES_H
#define GSERIES_H
#include <iostream>
#define rozmiarCiagu int
#define ciag double*

ciag InicjalizujCiagGeometryczny(int size, int iloraz);
//funkcja tworząca ciąg geom. skladajacy sie z okreslonej liczby wyrazow(size), o podanym ilorazie(iloraz)
void Wypisz(const ciag a, int size);
//funkcja wypisująca elementy ciągu


#endif