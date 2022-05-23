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
