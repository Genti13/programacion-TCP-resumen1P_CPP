#include "Alumno.h"
#include "Fecha.h"

Alumno::Alumno():Persona::Persona()
{
    this->IdAlumno = 0000;
    this->promedio = 0.0;
}
Alumno::Alumno(std::string _nombre,unsigned _edad,Fecha _nacimiento,
               long unsigned _idAlumno, float _promedio)
    :Persona::Persona(_nombre, _edad, _nacimiento)
{
    this->IdAlumno = _idAlumno;
    this->promedio = _promedio;
}

std::ostream& operator<<(std::ostream& os, const Alumno& alumno)
{
    os << *alumno.nombre << "\t" <<
       alumno.edad << "\t" <<
       alumno.nacimiento << "\t" <<
       alumno.IdAlumno << "\t" <<
       alumno.promedio;
    return os;
}
