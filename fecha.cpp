#include "Fecha.h"

Fecha::Fecha()
{
    this->dia = 1;
    this->mes = 1;
    this->anio = 1900;
}

Fecha::Fecha(unsigned _dia, unsigned _mes, unsigned _anio)
{
    unsigned const dias[2][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},
        {31,29,31,30,31,30,31,31,30,31,30,31}
    };

    int b = (_anio % 4 == 0) && (_anio % 100 != 0 || _anio % 400 == 0) ? 1 :  0;

    if(_dia > dias[b][_mes-1]|| _dia <= 0)
    {
        this->dia = 1;
        this->mes = 1;
        this->anio = 1900;
    }
    else
    {
        this->dia = _dia;
        this->mes = _mes;
        this->anio = _anio;
    }

}

std::ostream& operator<<(std::ostream& os, const Fecha& fecha)
{
    os << fecha.dia << "/" << fecha.mes << "/" << fecha.anio;

    return os;
}
