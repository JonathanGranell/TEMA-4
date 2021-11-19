//Definimos las funciones y enlazamos a la libreria que contiene las cabezaras en el .h
#include <stdio.h>

int suma(int a, int b)
{
    return a + b;
}

int resta(int a, int b)
{
    return a - b;
}

int multiplica(int a, int b)
{
    return a * b;
}

int dividir(int a, int b)
{
    return a / b;
}
int major(int a, int b)
{
    if (a > b){
        return a;
    }else{
        return b;
    }
}