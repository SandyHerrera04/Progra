#include <iostream>
#include <string>
using namespace std;

class TiendaDepartamental {
    private: 
    string tv;
    string tienda;
    int tamaño;
    public:
    TiendaDepartamental();
    TiendaDepartamental(string tv_, string tie, int tam);
    int getComprar();
    void setComprar(string tv_, int tam);
    void sucursal();
};
#endif
