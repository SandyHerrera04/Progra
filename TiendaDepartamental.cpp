#include "TiendaDepartamental.hpp"
#include <iostream>
#include <string>
using namespace std;

TiendaDepartamental::TiendaDepartamental() : tv{"Samsung"}, tienda{"Liverpool"}, tamaño{65} {}
TiendaDepartamental::TiendaDepartamental(string tv_, string tie, int tam) : tv{tv_}, tienda{tie}, tamaño{tam} {}

int TiendaDepartamental::getComprar() {return tv, tamaño;}
void TiendaDepartamental::setComprar(string tv_, int tam) {tv = tv_, tamaño = tam;}
void TiendaDepartamental::sucursal()
{
    cout << "Bienvenido a: " << tienda << endl;
    cout << "Usted desea comprar la televisión: " << tv << "tiene un tamaño en pulgadas de: " << tamaño <<endl;
}
