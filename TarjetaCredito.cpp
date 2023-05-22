#include "TarjetaCredito.hpp"
#include <iostream>
#include <string>
using namespace std;

TarjetaCredito::TarjetaCredito() : cliente{"Rodrigo Romero"},  numero_tarjeta{1234567890123456}, cvv{123}, fecha_caducidad{"01/25"} {}
TarjetaCredito::TarjetaCredito(string cli, int num_tar, int cvv_, string fech_cad) : cliente{cli}, numero_tarjeta{num_tar}, cvv{cvv_}, fecha_caducidad{fech_cad} {}

string TarjetaCredito::getPagar() {return numero_tarjeta, fecha_caducidad;}
int TarjetaCredito::getConfirmar() {return cliente, cvv;}
void TarjetaCredito::setPagar(int num_tar, string fech_cad) {numero_tarjeta = num_tar, fecha_caducidad = fech_cad;}
void TarjetaCredito::setConfirmar(string cli, int cvv_) {cliente = cli, cvv = cvv_;}
void TarjetaCredito::pago()
{
    cout << "Su nombre es: " << cliente << endl;
    cout << "Su método de pago erá con tarjeta, su número de tarjeta es: " << numero_tarjeta << "la fecha de caducidad de su tarjeta es: " << fecha_caducidad <<endl;
    cout<< "Su pin de seguridad es: " << cvv << endl;
}
