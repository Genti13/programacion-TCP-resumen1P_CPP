#include "Numero.h"

Numero::Numero()
{
    this->numero = 0;
}

Numero::Numero(const int val)
{
    this->numero = val;
}

Numero::Numero(const Numero& val)
{
    this->numero = val.numero;
}

Numero Numero::operator+(const Numero& numero2)const
{
     Numero suma;
     suma.numero = this->numero + numero2.numero;

     return suma;
}

Numero Numero::operator+(const int& numero2)const
{
     Numero suma;
     suma.numero = this->numero + numero2;

     return suma;
}

Numero& Numero::operator=(const Numero& numero2)
{
    this->numero = numero2.numero;

    return *this;
}

Numero& Numero::operator=(const int& numero2)
{
    this->numero = numero2;

    return *this;
}

bool Numero::operator==(const Numero& numero2)
{
    return this->numero == numero2.numero;
}

bool Numero::operator==(const int& numero2)
{
    return this->numero == numero2;
}

std::ostream& operator<<(std::ostream& os, const Numero& numero)
{
    os << numero.numero;

    return os;
}
std::istream& operator>>(std::istream& os, Numero& numero)
{
     os >> numero.numero;

     return os;
}

int Numero::getValue()
{
    return this->numero;
}

Numero::~Numero()
{
}
