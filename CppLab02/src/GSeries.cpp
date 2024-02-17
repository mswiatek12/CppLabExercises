#include "GSeries.h"

ciag InicjalizujCiagGeometryczny(int size, int iloraz){
    ciag a = new double[size];
    *a = 1;
    int i;
    for(i=1; i <= size; i++){
        *(a+i) = *(a+i-1)*iloraz;
    }
    return a;
}

void Wypisz(const ciag a, int size){
    std::cout << "(";
    for(int i=0; i < size; i++){
        std::cout << *(a+i) << ", ";
    }
    std::cout << ")" << std::endl;
}    