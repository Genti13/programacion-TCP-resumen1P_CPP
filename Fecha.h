#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

#include <iostream>

class Fecha
{
private:
    unsigned dia;
    unsigned mes;
    unsigned anio;
public:
    Fecha();
    Fecha(unsigned , unsigned , unsigned );

    friend std::ostream& operator<<(std::ostream& os, const Fecha&);
    friend std::istream& operator>>(std::istream& is, Fecha&);
};


#endif // FECHA_H_INCLUDED
