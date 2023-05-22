#ifndef ENTREGA_HPP
#define ENTREGA_HP

#include <iostream>
#include <string>
using namespace std;

class Entrega{
    private:
    string direccion;
    int telefono;
    public:
    Entrega();
    Entrega(string dir, int tel); //Constructor
    string getEntregar();
    int getLlamar();
    void setEntregar(string dir);
    void setLlamar(int tel);
    void datos();

};
#endif
