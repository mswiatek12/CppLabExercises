#ifndef GOPERATIONS_H
#define GOPERATIONS_H
#include "GSeries.h"
#include <iostream>

typedef double (*operacja)(const ciag, int);
//definicja typu. Tworzy alias "operacja" dla szczególnego typu wskaźnika na funkcję
double Suma(const ciag a, int size);
//funkcja która obliczy sumę ciągu geometrycznego
double Srednia(const ciag a, int size);
//funkcja która obliczy średnią arytmetyczną dla ciągu geometrycznego
double *Wykonaj(operacja a, const ciag x, int size);
//funkcja przyjmuje wskaznik do pewnej funkcji "a" która zostanie zastosowana na ciągu geometrycznym "x"
void UsunCiagi();

#endif