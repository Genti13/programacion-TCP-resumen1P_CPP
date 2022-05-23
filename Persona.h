#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include <stdlib.h>

#include<string.h>

#include "Fecha.h"

class Persona
{
private:

protected:

    std::string * nombre;
    unsigned edad;
    Fecha nacimiento;

public:
    Persona();
    Persona(std::string, unsigned, Fecha);

    friend std::ostream& operator<<(std::ostream& os, const Persona& persona);
    friend std::istream& operator>>(std::istream& is, Persona& persona);

    ~Persona();
};


#endif // PERSONA_H_INCLUDED
