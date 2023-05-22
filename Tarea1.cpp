#include "TarjetaCredito.hpp"
#include "Entrega.hpp"
#include "TiendaDepartamental.hpp"
using namespace std;

int main(){

    TiendaDepartamental td1;
    td1.setComprar("Samsung", 65);
    td1.sucursal();
    
    TarjetaCredito tc1;
    tc1.setPagar(1234567890123456, "01/25");
    tc1.setConfirmar("Rodrigo Romero", 123);
    tc1.pago();

    Entrega e1;
    e1.setLlamar(5512121212);
    e1.setEntregar("Berlín 147, Valle Dorado, 54020 Tlalnepantla de Baz, Méx.");
    e1.datos();

    cout<< "Gracias por su compra vuelva pronto." << endl;

}
