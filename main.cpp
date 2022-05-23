#include <iostream>
#include "Alumno.h"
#include "Numero.h"

using namespace std;

int main()
{
    /**Parte de Herencia**/
    cout << "Parte de HERENCIA" << endl;
    Persona persona1;
    Persona persona2("Alan Gentile", 24, Fecha(13,11,1997));

    cout << persona2 <<endl;

    Alumno alumno1;
    Alumno alumno2("Nombre Apellido", 33, Fecha(25,2,1994), 00567, 5.66);

    cout <<alumno2 << endl;

    cout << "==============================================" << endl;

    /**Parte de Sobrecarga de Operadores**/
    cout << "Parte de SOBRECARGA OPERADORES" << endl;
    Numero num1;
    Numero num2 = 15;
    Numero num3 = num2 +5;
    Numero num4 = num2;
    Numero num5(num3);
    Numero num6;
    int a;

    cin >> num6;

    cout << "Valor 1:" << num1 <<endl;
    cout << "Valor 2:" << num2 <<endl;
    cout << "Valor 3:" << num3 <<endl;
    cout << "Valor 4:" << num4 <<endl;
    cout << "Valor 6:" << num6 <<endl;

    cout << endl;

    if(num2 == num4)
    {
        cout << "Valor 2 y 4 son iguales: " << num2 << " = " << num4 << endl;
    }

    if(num3 == 20)
    {
        cout << "Valor 3 es igual a 20: " << num2 << " = " << num4 << endl;
    }

    cout << endl;

    cout << "Valor 5 A:" << num5 <<endl;
    num3=100;
    cout << "Valor 5 B:" << num5 <<endl;
    cout << "Valor 3:" << num3 <<endl;


    return 0;
}
