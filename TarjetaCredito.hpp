//archivo .hpp
#ifndef TARJETACREDITO_HPP
#define TARJETACREDITO_HPP

#include <iostream>
#include <string>
using namespace std;

class TarjetaCredito {
    private:
    string cliente;
    int numero_tarjeta;
    int cvv;
    string fecha_caducidad;
    public:
    TarjetaCredito();
    TarjetaCredito(string cli, int num_tar, int cvv_, string fech_cad); 
    string getPagar();
    int getConfirmar();
    void setPagar(int num_tar, string fech_cad);
    void setConfirmar(string cli, int cvv_);
    void pago();
};
#endif
