#include "Persona.h"

Persona::Persona()
{
    this->edad = 0;
    this->nacimiento = Fecha();
    this->nombre = new std::string();
}

Persona::Persona(std::string _nombre, unsigned _edad, Fecha _nacimiento)
{
    this->nombre = new std::string(_nombre);
    this->edad = _edad;
    this->nacimiento = _nacimiento;
}

std::ostream& operator<<(std::ostream& os, const Persona& persona)
{
    os << *persona.nombre << "\t"
       << persona.edad << "\t"
       << persona.nacimiento;

    return os;
}

std::istream& operator>>(std::istream& is, Persona& persona)
{
    char input[30];
    std::cout << "Ingresar Nombre: ";

    std::cin.getline(input, sizeof(input));
    *persona.nombre = input;

    std::cout <<"Ingresar Edad: ";
    is >> persona.edad;

    std::cout <<"Ingresar Cumple: " << std::endl;
    is >> persona.nacimiento;
    return is;
}

Persona::~Persona()
{
    delete (nombre);
}






//tProducto
//{
//    int id;
//    int valor;
//}
//
//tNovedad
//{
//    int id;
//    char algo;
//}
//
//int comparar(void * valor1, void * valor2)
//{
//    tProducto * producto = (tProducto *)valor1;
//    tNovedad * novedad = (tNovedad *)valor2;
//
//    return producto->id - novedad->id;
//
//}
