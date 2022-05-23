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
};


#endif // PERSONA_H_INCLUDED
