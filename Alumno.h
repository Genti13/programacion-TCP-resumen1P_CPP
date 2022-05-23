#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED

#include "Persona.h"

class Alumno : public Persona //Aca decimos que hereda de Persona
{
private:
    long unsigned IdAlumno;
    float promedio;
public:
    Alumno();
    Alumno(std::string,unsigned,Fecha,long unsigned, float);

    friend std::ostream& operator<<(std::ostream& os, const Alumno& alumno);
};

#endif // ALUMNO_H_INCLUDED
