#include "Entrega.hpp"
#include <iostream>
#include <string>
using namespace std;

Entrega::Entrega() : direccion{"Berlín 147, Valle Dorado, 54020 Tlalnepantla de Baz, Méx."}, telefono{5512121212} {}
Entrega::Entrega(string direccion, int telefono) : direccion{direccion}, telefono{telefono} {}

string Entrega::getEntregar() {return direccion;}
int Entrega::getLlamar() {return telefono;}
void Entrega::setEntregar(string dir) {direccion = dir;}
void Entrega::setLlamar(int tel) {telefono = tel;}
void Entrega::datos()
{
    cout << "Su televisión llegará a :" << direccion << "cuando estemos cerca nos comunicaremos al: " << telefono <<endl;
}
