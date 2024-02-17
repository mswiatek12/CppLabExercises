#include "GOperations.h"

double Suma(const ciag a, int size){
    double suma, i;
    for(i=0; i < size; i++){
        suma += *a;
        a++;
    }
    return suma;
}
double Srednia(const ciag a, int size){
    double sum = Suma(a,size);
    double avg = sum/size;
    return avg;
}

double *Wykonaj(operacja a, const ciag x, int size){
    double result = a(x, size);
    double *p = &result;
    return p;
}

void UsunCiagi(){}