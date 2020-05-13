#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float radio, area, perimetro;

    cout << "ingrese el radio de la circunferencia: ";

    cin >> radio;

    area = 3.1416*radio*radio;

    perimetro = 2*3.1416*radio;

    cout << "el area de la circunferencia es: " << area << endl;

    cout << "el perimetro de la circunferencia es: " << perimetro;  

}