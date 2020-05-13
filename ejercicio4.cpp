#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string melon;
    string producto;
    int cantidad, b;
    double precio_melon, total;

    producto = melon; 

    melon = b;

    b = 4;

    precio_melon = b;
    
    cout << "bienvenido hay venta de melones" << endl << endl;
    cout << "estos son los precios:" << endl << endl;
    cout << "melon: " <<precio_melon << endl << endl;
    cout << "que desea comprar: ";
    // escribir melon ya que es la unica opcion, se suponia iban a ver mas frutas
    cin >> producto;
    cout << "que cantidad desea llevar: ";
    cin >> cantidad;
    cout << "este es su total: " << endl << endl;
    cout << "producto: " << producto << endl;
    cout << "cantidad: " << cantidad << endl;
    total = (cantidad*precio_melon);
    cout << "total a pagar: " << total;
    
}